#CPSL

This is an implementation of a compiler for the CPSL (Compiler Project Source Language) language, a toy language designed for the CS5300 Compilers course at Utah State University. The language is a "strongly  typed,  static  scoped,  block  structured,  high  level language in the spirit of Pascal" (quoted from the language's specification document). The language's full specifications, detailing its syntax, structure, and features, can be found on the Github page for the class [here](https://github.com/ksundberg/CS5300/blob/master/CPSL.tex). This compiler compiles CPSL code into MIPS assembly code, which can then be run on any MIPS processor or emulator. It was written in C++, using the Bison parser and Flex scanner.

##Using the compiler

###Dependencies
The following dependencies are necessary to run the compiler along with the produced MIPS code:
- gcc 7.3
- flex 2.6
- bison 3.0.4
- cmake 3.9
- MARS 4.5

###Running the compiler
The compiler is expected to be run from the command line. To build the compiler, clone the repository and navigate to the main directory. From there, run `cmake .`, followed by `make`. This will generate a `cpsl` executable in the main directory, which can then be run.

This compiler reads the CPSL program from stdin and outputs MIPS to stdout. As such, it is recommended that the user redirect stdin and stdout to point towards their CPSL file and the output MIPS file, respectively. For example, to compile `my_cpsl_program.cpsl` into `my_mips_program.asm`, run `./cpsl <my_cpsl_program.cpsl >my_mips_program.asm`. A set of example CPSL files can be found in the `examples` directory, demonstrating how the language handles expressions, control statements, data structures, and functions.

##How the Compiler Works
The compiler begins in `main.cpp`. Here, it creates a global value for the tables used by the compiler, as well as the register pool. It then inserts the predefined values needed for the type table (the primitive types) and the symbol table ("true" and "false" are assigned the applicable BOOLEAN values). From here, it calls `yyparse`, which starts the scanning and parsing section of the compiler.

###Scanning and Parsing
The first step taken by the compiler is to scan the given file and replace the text with tokens that can be more reliably used by the parser. This is done with Flex, which searches for text patterns with regex, and returns tokens for matches. It scans for keywords first (for example, "if" would be replaced by an IF_TOKEN), then operators ("+" replaced with ADD_TOKEN), then the more general ids, strings, and numbers, whose values are stored using the `yylval` tool. These tokens are then sent to the parser.

The parser takes the tokens and verifies that they form a valid CPSL program, then transforms the tokens into a Program. A program is effectively a tree of statements and expressions, which provides an order in which the MIPS code can be emitted. If the tokens provided do not form a valid CPSL program, the parser will throw a syntax error, along with the line number the syntax error was on. If they do form a valid program, a tree will be constructed, and then code will be emitted.

The parser uses Bison to recognizing patterns in tokens. Each value in Bison is defined by a series of patterns. There can be many definitions for a single value in Bison. For example, an "lvalue"* matches on `ID_TOKEN` (what we would think of as a normal variable, ie `mystruct.a`), on `lvalue PER_TOKEN ID_TOKEN` (which would be a value in a struct), and on `lvalue LBRAC_TOKEN expr RBRAC_TOKEN` (which would be a value of an array, ie `myarray[1]`). The recursive nature of Bison allows for simple but inclusive declarations of matching. For example, `a.b[1].c.d[2][3]` matches as a valid lvalue, even with the simple rules laid out above.

Every value is associated with a Bison type with a %type declaration (for example, `ID_TOKEN`s are assigned `stringVal`, `expr`s are assigned `expr`, etc). Each Bison type is in turn associated with a C++ type in the %union block (for example, `stringVal` is a `char*`, `expr` is an `Expression*`)  This enables the program to turn the tokens into C++ classes that are able to emit the necessary code. For example, an lvalue matched on `ID_TOKEN` passes the `ID_TOKEN`'s string representation to the new `LvalueExpression` constructed and returned, while an `expr` matched on `expr ADD_TOKEN expr` returns a new `AddExpression` with the two arguments.

After the program is parsed, code is emitted. The remainder of this section will focus on what is necessary to emit code for the various features of the language.

\* "lvalue" is short for "left value". A left value is any value in the program that can be on the left side of an assignment statement. Any value associated with a location in memory is an lvalue.

### Emitting simple expressions
An Expression is anything that evaluates to a value. Valid expressions include numerical constants, string constants, char constants, arithmetic and boolean operations, lvalues, and function calls. Function calls and more complicated lvalues will be described in their own section, but the rest are generally included in the category of "simple expressions".

Numerical constants are simple to emit. We return an `ExpressionResult` with the constant int value. In a naive implementation, we would emit `"li $register $int_val"` to load the int value into a register. However, doing so too early can lead to a case where a very long arithmetic expression runs out of registers and is unable to compute the value (see `examples/simple_expressions/long_expressions.cpsl` for an example of such a case). Instead, we pass on the constant value and only load it into a register immediately before evaluation. This is done in the `load_int` function in `UsefulFunctions`, which is called by `get_reg_from_result` in `UsefulFunctions`. This function is used in most arithetic expressions, ensuring that registers are conserved properly. Because char constants are able to be loaded into memory, they are treated almost identically to numerical constants.

String constants are the only valid form of strings in CPSL, meaning that strings cannot split, concatenated, or otherwise modified. As such, strings are effectively only used by WriteStatements. All string constants in the program are put into the string table, where they are associated with a label. The label is then returns, for usage by whatever called the emit. At the end of the program, the string table emits the MIPS code that associates all strings with a label.

Simple lvalues are simply `ID_TOKEN`s that have been associated with a spot in memory. This association is saved in the `SymbolTable`. To load the lvalue, the MIPS code `lw $ret_reg, $offset($base_reg)` is emitted. The `base_reg` simply tells the program where to start counting from. The `offset` is added to the `base_reg` to reach the desired location in memory. `lw` loads whatever is at the indicated location in memory into `ret_reg`. Like with constants, loading the value into memory is deferred until the last moment, to save registers until when they are needed. Because memory can only be modified by statements, we are assured that the value at that location in memory will not be modified between expression emission and expression usage by a parent expression or statement.

All arithmetic and boolean expressions function in a conceptually identical way. An expression will have its sub expressions emit the code necessary (remember that these sub expressions may be numerical constants). It will then check that the types of the sub expressions. If they do not match, an error is thrown; otherwise, it will load the sub expressions values into registers, as well as reserving a register for the result. Then, it emits the MIPS code necessary to complete the expression (for example, `AddExpression` emits `add $ret_reg, $left_reg, $right_reg`). The registers used for the arguments are then returned to the register pool. The register is then returned in an `ExpressionResult`, so that it may be used by the statement or expression that fired the `emit` function.

An optimization utilized by this compiler's expressions is constant folding. If both of an expression's sub expressions are constant, the relevant operations are done at compile time, rather than at run time. This enables an expression like `1+2+3+4+5+6` to be reduced to `21` at run time, which is much more efficient to execute both in terms of run time and registers.

###Emitting simple statements
Assign statements are given an `LvalueExpression` and an `Expression`. The expression is emitted, then the expression's type is compared to the lvalue's type. If they are different, a type error is thrown. Otherwise, as long as the lvalue is a simple lvalue, the register containing the expression's value is saved to the lvalue's location in memory with `sw $reg_to_save, $offset($base_reg)`. Saving into arrays and record is described in their own section.

Write statements are given a list of expressions. These expressions are emitted, have their values loaded into `reg`, and then print sequentially. 
- If the expression is a string constant, `li $v0, 4` is emitted, which tells the MIPS processor that `la` should print strings. `la $a0 $reg` is emitted, which prints the string label stored in the `reg`.
- If the expression is an int or a bool, `li $v0,1` is emitted, which tells the MIPS processor should print ints. `move $$a0, reg` is emitted, which prints an int.
- Printing a char is identical to printing an int, except that `li $v0,1` is replaced with `li $v0,11`, which tells the processor to interpret the register as a char.

Read statements are given a list of lvalues. Each lvalue is emitted, then has its location in memory assigned to whatever the user types in. This is done through `li $v0,5` or `li $v0,12` (depending on whether the lval was a char or an int), then `syscall`, then `sw $v0, $offset($base_reg)`. 


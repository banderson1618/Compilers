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

###Scanning and Parsing
The compiler 
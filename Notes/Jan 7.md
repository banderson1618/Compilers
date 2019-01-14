- Required software
  - gcc 7.3
  - flex 2.6
  - bison 3.0.4
  - cmake 3.9
  - Mars 4.5

- Compiler Project Source Languages
  - We are building a simple compiler
  - Language is PASCAL-like
  - Only integral types and string constants
  - MIPS is the target architecture
  - This is hard

- Language Processors
  - Compilers convert from source languages to target languages
  - An important side job is error detection

- Processing Chain
  - Preprocessor
    - Changes the source file to be more optimized (?)
  - Compiler
    - Turns code into assembly
  - Assembler
    - Turns the assembly into machine code
  - Linker
  - Loader
    - Puts the files into memory so it can actually be accessed

- Symbol Table
  - All parts access the Symbol Table (is global)
  - Stores type and location information

- Front End
  - Responsible for language dependent portions
  - Lexical, syntax, and semantic analysis

- Optimizer
  - Most work done here
  - Intermediate code to better intermediate code
  - Independent of both source and target language

- Back End
  - Responsible for target dependent portions
  - Code generator

- Compiler Collections
  - Mix and match front and back ends
  - New languages only require a new front end
  - New machines only require a back end

- Scanning

  - Lexical Analysis
  - Regular Language
  - Transform character stream into tokens

- Parsing

  - Syntax Analysis
  - Context Free Grammar
  - Transform token stream to syntax tree
  - Flex and Bison are used for Scanning and Parsing

- Code Generation

  - May include optimization
  - Transform syntax tree to executable code

  char -> scan -> {tokens} -> parse -> {AST} -> Front End -> {DFG} -> Optimizer -> {DFG} -> Back End -> assembly

- Generations

  - Machine code
  - Assembly
  - General purpose languages
  - Special purpose languages

- Types of Languages

  - Imperative vs Declarative
  - High Level vs Low Level

- 
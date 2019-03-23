cmake_minimum_required(VERSION 2.8)
project(CPSL_Compiler)

find_package(BISON)
find_package(FLEX)

bison_target(Parser my_parser.y ${CMAKE_CURRENT_BINARY_DIR}/parser.cpp)
flex_target(Scanner my_scanner.l ${CMAKE_CURRENT_BINARY_DIR}/scanner.cpp)
add_flex_bison_dependency(Scanner Parser)

set(EXTRA_COMPILE_FLAGS "-g3 -std=c++14")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${EXTRA_COMPILE_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS}")

set(cpsl_srcs
  main.cpp
  Expressions/Expression.cpp
  Expressions/Expression.hpp

  Expressions/LvalueExpression.hpp
  Expressions/LvalueExpression.cpp

  Expressions/AndExpression.hpp
  Expressions/AndExpression.cpp
  Expressions/OrExpression.hpp
  Expressions/OrExpression.cpp
  Expressions/EqExpression.hpp
  Expressions/EqExpression.cpp
  Expressions/NeqExpression.hpp
  Expressions/NeqExpression.cpp
  Expressions/LeqExpression.hpp
  Expressions/LeqExpression.cpp
  Expressions/GeqExpression.hpp
  Expressions/GeqExpression.cpp
  Expressions/LessExpression.hpp
  Expressions/LessExpression.cpp
  Expressions/GreaterExpression.hpp
  Expressions/GreaterExpression.cpp
  Expressions/SuccExpression.hpp
  Expressions/SuccExpression.cpp
  Expressions/PredExpression.hpp
  Expressions/PredExpression.cpp

  Expressions/AddExpression.hpp
  Expressions/AddExpression.cpp
  Expressions/BitwiseExpression.hpp
  Expressions/BitwiseExpression.cpp
  Expressions/DivExpression.hpp
  Expressions/DivExpression.cpp
  Expressions/FuncExpression.hpp
  Expressions/FuncExpression.cpp
  Expressions/MultExpression.hpp
  Expressions/MultExpression.cpp
  Expressions/NegExpression.hpp
  Expressions/NegExpression.cpp
  Expressions/ParenExpression.hpp
  Expressions/ParenExpression.cpp
  Expressions/RemainExpression.hpp
  Expressions/RemainExpression.cpp
  Expressions/SubExpression.hpp
  Expressions/SubExpression.cpp
  Expressions/ToCharExpression.hpp
  Expressions/ToCharExpression.cpp
  Expressions/ToIntExpression.hpp
  Expressions/ToIntExpression.cpp

  Expressions/IntExpression.hpp
  Expressions/IntExpression.cpp
  Expressions/CharExpression.hpp
  Expressions/CharExpression.cpp
  Expressions/StringExpression.hpp
  Expressions/StringExpression.cpp

  Statements/Statement.hpp
  Statements/Statement.cpp
  Statements/AssignStatement.hpp
  Statements/AssignStatement.cpp
  Statements/ReadStatement.hpp
  Statements/ReadStatement.cpp
  Statements/WriteStatement.hpp
  Statements/WriteStatement.cpp
  Statements/NullStatement.hpp
  Statements/NullStatement.cpp
  Statements/StopStatement.hpp
  Statements/StopStatement.cpp
  Statements/RepeatStatement.hpp
  Statements/RepeatStatement.cpp
  Statements/WhileStatement.hpp
  Statements/WhileStatement.cpp
  Statements/IfStatement.hpp
  Statements/IfStatement.cpp
  Statements/IfBlockStatement.hpp
  Statements/IfBlockStatement.cpp
  Statements/ForStatement.hpp
  Statements/ForStatement.cpp

  Misc_Classes/Program.hpp
  Misc_Classes/Program.cpp
  Misc_Classes/RegisterPool.hpp
  Misc_Classes/RegisterPool.cpp
  Misc_Classes/Type.hpp
  Misc_Classes/Type.cpp
  Misc_Classes/SymbolTable.hpp
  Misc_Classes/SymbolTable.cpp
  Misc_Classes/TypesTable.hpp
  Misc_Classes/TypesTable.cpp
  Misc_Classes/StringTable.hpp
  Misc_Classes/StringTable.cpp
  Misc_Classes/UsefulFunctions.hpp
  Misc_Classes/UsefulFunctions.cpp
  Misc_Classes/ArrayType.hpp
  Misc_Classes/ArrayType.cpp
  Misc_Classes/RecordType.hpp
  Misc_Classes/RecordType.cpp


  ${BISON_Parser_OUTPUTS}
  ${FLEX_Scanner_OUTPUTS}
)
source_group("cpsl" FILES ${cpsl_srcs})

add_executable(cpsl ${cpsl_srcs})
target_link_libraries(cpsl ${FLEX_LIBRARIES} ${BISON_LIBRARIES})
target_include_directories(cpsl PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})


cmake_minimum_required(VERSION 2.8)


find_package(BISON)
find_package(FLEX)

BISON_TARGET(MyParser my_parser.y ${CMAKE_CURRENT_BINARY_DIR}/parser.c)
FLEX_TARGET(MyScanner lex.l ${CMAKE_CURRENT_BINARY_DIR}/lexer.c)
ADD_FLEX_BISON_DEPENDENCY(MyScanner MyParser)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_executable(Foo
	Foo.c
	${BISON_MyParser_OUTPUTS}
	${FLEX_MyScanner_OUTPUTS}
)

#include "Expression.hpp"
#include <iostream>
#include <string>

Expression::Expression(){

}

int Expression::getVal(){
	return -1;
}

char Expression::getChar(){
	return 'a';
}

char* Expression::getID(){
	char foo[] = "bar";
	return foo;
}

ExpressionResult Expression::emit(){
	std::cout << "Unimplemented emit function" << std::endl;
	ExpressionResult empty;
	return empty;
}


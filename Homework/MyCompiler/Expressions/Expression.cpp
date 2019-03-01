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

std::string Expression::emit(RegisterPool* register_pool){
	std::cout << "Unimplemented emit function" << std::endl;
	return "Unimplemented emit function";
}


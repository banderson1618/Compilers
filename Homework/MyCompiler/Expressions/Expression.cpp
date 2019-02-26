#include "Expression.hpp"
#include <iostream>

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

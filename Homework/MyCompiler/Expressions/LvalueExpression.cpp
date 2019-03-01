#include "LvalueExpression.hpp"
#include <string>
#include <iostream>

LvalueExpression::LvalueExpression(char* id){
	_id = id;
}


char* LvalueExpression::getID(){
	return _id;
}

std::string LvalueExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}

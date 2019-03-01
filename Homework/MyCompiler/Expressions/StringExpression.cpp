#include "StringExpression.hpp"
#include <string>
#include <iostream>

StringExpression::StringExpression(char* val){
	_val = val;
}

std::string StringExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}

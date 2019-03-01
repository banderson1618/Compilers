#include "CharExpression.hpp"
#include <string>
#include <iostream>

CharExpression::CharExpression(char val){
	_val = val;
}

std::string CharExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}

#include "CharExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>

extern Type* char_type;

CharExpression::CharExpression(char val){
	_val = val;
}

std::string CharExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	int int_val = int(_val);
	type = char_type;
	std::cout << "\tli\t" << ret_reg << ", " << int_val << "\t#Char expression" << std::endl;
	return ret_reg;
}

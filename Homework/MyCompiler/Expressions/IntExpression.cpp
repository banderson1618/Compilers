#include "IntExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>

extern PrimitiveType* int_type;

IntExpression::IntExpression(int val){
	_val = val;
}


int IntExpression::getVal(){
	return _val;
}

std::string IntExpression::emit(RegisterPool* register_pool){
//	type = int_type;
	std::string ret_reg = register_pool->get_register();
	std::cout << "li " << ret_reg << ", " << _val << std::endl;
	
	return ret_reg;
}

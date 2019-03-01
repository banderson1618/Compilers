#include "FuncExpression.hpp"
#include <string>
#include <iostream>

FuncExpression::FuncExpression(char *id,std::vector<Expression*> *args_list){
	_id = id;
	_args_list = args_list;
}

std::string FuncExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}

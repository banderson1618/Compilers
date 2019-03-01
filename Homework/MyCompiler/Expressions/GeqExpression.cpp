#include "GeqExpression.hpp"
#include <string>
#include <iostream>

GeqExpression::GeqExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

std::string GeqExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}

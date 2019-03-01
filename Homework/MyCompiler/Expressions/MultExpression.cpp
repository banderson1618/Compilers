#include "MultExpression.hpp"
#include <string>
#include <iostream>

MultExpression::MultExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

std::string MultExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}

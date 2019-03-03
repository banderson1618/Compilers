#include "RemainExpression.hpp"
#include <string>
#include <iostream>

RemainExpression::RemainExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

std::string RemainExpression::emit(RegisterPool* register_pool){
	std::string right_result = _right_expr->emit(register_pool);
	std::string left_result = _left_expr->emit(register_pool);
	
	if (_left_expr->type != _right_expr->type){
		throw "Cannot divide different types";
	}	
	type = _left_expr->type;
	
	std::cout << "\tdiv\t" << left_result << ", " << right_result << "\t#Remain expression" << std::endl;
	register_pool->return_register(left_result);
	register_pool->return_register(right_result);

	std::string ret_reg = register_pool->get_register();
	std::cout << "\tmfhi\t" << ret_reg << std::endl;
	
	return ret_reg;
}

#include "AddExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>


AddExpression::AddExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

std::string AddExpression::emit(RegisterPool* register_pool){
	std::string left_result = _left_expr->emit(register_pool);
	std::string right_result = _right_expr->emit(register_pool);
	std::string ret_reg = register_pool->get_register();

	
	if (_left_expr->type != _right_expr->type){
		throw "Cannot add different types";
	}	
	type = _left_expr->type;
	
	std::cout << "\tadd\t" << ret_reg << ", " << left_result << ", " << right_result << "\t#Add expression" << std::endl;
	register_pool->return_register(left_result);
	register_pool->return_register(right_result);
	
	return ret_reg;
}

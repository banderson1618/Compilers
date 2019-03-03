#include "AndExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>

extern PrimitiveType* bool_type;

AndExpression::AndExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

std::string AndExpression::emit(RegisterPool* register_pool){
	type = bool_type;

	std::string right_result = _right_expr->emit(register_pool);
	std::string left_result = _left_expr->emit(register_pool);	

	std::string ret_reg = register_pool->get_register();
	std::cout << "\tand\t" << ret_reg << ", " << left_result << ", " << right_result << "\t\t#And expression" << std::endl;
	register_pool->return_register(left_result);
	register_pool->return_register(right_result);
	
	return ret_reg;
}


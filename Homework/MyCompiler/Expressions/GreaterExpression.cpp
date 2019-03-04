#include "GreaterExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>
extern PrimitiveType* bool_type;

GreaterExpression::GreaterExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

std::string GreaterExpression::emit(RegisterPool* register_pool){
	type = bool_type;

	std::string right_result = _right_expr->emit(register_pool);
	std::string left_result = _left_expr->emit(register_pool);
	
	if (_left_expr->type != _right_expr->type){
		throw "Type error: Can't > variables with different types";
	}	

	std::string ret_reg = register_pool->get_register();
	std::cout << "\tslt\t" << ret_reg << ", " << right_result << ", " << left_result << "\t\t#Greater than expression" << std::endl;
	register_pool->return_register(left_result);
	register_pool->return_register(right_result);
	
	return ret_reg;
}

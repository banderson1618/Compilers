#include "LessExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>
extern PrimitiveType* bool_type;
extern RegisterPool register_pool;

LessExpression::LessExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

ExpressionResult LessExpression::emit(){
	type = bool_type;

	ExpressionResult right_result = _right_expr->emit();
	ExpressionResult left_result = _left_expr->emit();

	std::string right_reg = get_reg_from_result(right_result);
	std::string left_reg = get_reg_from_result(left_result);
	
	if (_left_expr->type != _right_expr->type){
		throw "Type error: Can't < variables with different types";
	}	

	std::string ret_reg = register_pool.get_register();
	std::cout << "\tslt\t" << ret_reg << ", " << left_reg << ", " << right_reg << "\t\t#Less than expression" << std::endl;
	register_pool.return_register(left_reg);
	register_pool.return_register(right_reg);	

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = ret_reg;	

	return ret_result;
}

#include "DivExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>

extern RegisterPool register_pool;

DivExpression::DivExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

ExpressionResult DivExpression::emit(){
	ExpressionResult right_result = _right_expr->emit();
	ExpressionResult left_result = _left_expr->emit();
	
	std::string left_reg = get_reg_from_result(left_result);
	std::string right_reg = get_reg_from_result(right_result);
	
	if (_left_expr->type != _right_expr->type){
		throw "Cannot divide different types";
	}	
	type = _left_expr->type;
	
	std::cout << "\tdiv\t" << left_reg << ", " << right_reg << "\t#Div expression" << std::endl;
	register_pool.return_register(left_reg);
	register_pool.return_register(right_reg);

	std::string ret_reg = register_pool.get_register();
	std::cout << "\tmflo\t" << ret_reg << std::endl;

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = ret_reg;	
	
	return ret_result;
}

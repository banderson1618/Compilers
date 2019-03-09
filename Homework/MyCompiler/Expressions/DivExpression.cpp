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

ExpressionResult const_fold_div(ExpressionResult left_result, ExpressionResult right_result){
	ExpressionResult ret_result;
	if(left_result.result_type == const_char || right_result.result_type == const_char){
		ret_result.result_type = const_char;
	}
	else{
		ret_result.result_type = const_int;
	}
	ret_result.const_val = left_result.const_val / right_result.const_val;
	return ret_result;
}

ExpressionResult DivExpression::emit(){
	ExpressionResult right_result = _right_expr->emit();
	ExpressionResult left_result = _left_expr->emit();
	
	if (_left_expr->type != _right_expr->type){
		throw "Cannot divide different types";
	}	
	type = _left_expr->type;

	if (is_const(left_result) && is_const(right_result)){
		return const_fold_div(left_result, right_result);
	}
	
	std::string left_reg = get_reg_from_result(left_result);
	std::string right_reg = get_reg_from_result(right_result);
	
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

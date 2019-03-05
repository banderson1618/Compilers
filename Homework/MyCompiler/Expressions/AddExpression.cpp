#include "AddExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>

extern RegisterPool register_pool;


AddExpression::AddExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

ExpressionResult AddExpression::emit(){
	ExpressionResult left_result = _left_expr->emit();
	ExpressionResult right_result = _right_expr->emit();
	std::string ret_reg = register_pool.get_register();
	
	std::string left_reg = get_reg_from_result(left_result);
	std::string right_reg = get_reg_from_result(right_result);	

	if (_left_expr->type != _right_expr->type){
		throw "Cannot add different types";
	}	
	type = _left_expr->type;
	
	std::cout << "\tadd\t" << ret_reg << ", " << left_reg << ", " << right_reg << "\t#Add expression" << std::endl;
	register_pool.return_register(left_reg);
	register_pool.return_register(right_reg);

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = ret_reg;	
	
	return ret_result;
}

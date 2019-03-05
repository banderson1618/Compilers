#include "ParenExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>

extern RegisterPool register_pool;

ParenExpression::ParenExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

ExpressionResult ParenExpression::emit(){
	ExpressionResult prime_result = _prime_expr->emit();
	std::string prime_reg = get_reg_from_result(prime_result);
	type = _prime_expr->type;
	

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = prime_reg;	

	return ret_result;
}

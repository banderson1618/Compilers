#include "ToCharExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>
extern PrimitiveType* char_type;

ToCharExpression::ToCharExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

ExpressionResult ToCharExpression::emit(){
	type = char_type;
	ExpressionResult prime_result = _prime_expr->emit();
	std::string prime_reg = get_reg_from_result(prime_result);	

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = prime_reg;
	return ret_result;
}

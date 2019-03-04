#include "ToIntExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>
extern PrimitiveType* int_type;

ToIntExpression::ToIntExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string ToIntExpression::emit(RegisterPool* register_pool){
	type = int_type;
	std::string prime_result = _prime_expr->emit(register_pool);	
	return prime_result;
}

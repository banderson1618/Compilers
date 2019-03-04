#include "ToCharExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>
extern PrimitiveType* char_type;

ToCharExpression::ToCharExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string ToCharExpression::emit(RegisterPool* register_pool){
	type = char_type;
	std::string prime_result = _prime_expr->emit(register_pool);	
	return prime_result;
}

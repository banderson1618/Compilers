#include "ParenExpression.hpp"
#include <string>
#include <iostream>

ParenExpression::ParenExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string ParenExpression::emit(RegisterPool* register_pool){
	std::string prime_result = _prime_expr->emit(register_pool);
	type = _prime_expr->type;
	
	return prime_result;
}

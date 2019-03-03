#include "NegExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>

extern PrimitiveType* int_type;

NegExpression::NegExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string NegExpression::emit(RegisterPool* register_pool){
	std::string prime_result = _prime_expr->emit(register_pool);

	std::string ret_reg = register_pool->get_register();

	
	if (_prime_expr->type != int_type){
		throw "Cannot negate a non-integer";
	}	
	type = int_type;
	
	std::cout << "\tsub\t" << ret_reg << ", $zero, " << prime_result << "\t#Negate expression" << std::endl;
	register_pool->return_register(prime_result);
	
	return ret_reg;
}

#include "NegExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>

extern PrimitiveType* int_type;
extern RegisterPool register_pool;

NegExpression::NegExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

ExpressionResult const_fold_neg(ExpressionResult prime_result){
	ExpressionResult ret_result;
	if(prime_result.result_type != const_int){
		throw "Can't negate a non-integer!";
	}
	ret_result.result_type = const_int;
	ret_result.const_val = -1 * prime_result.const_val;
	return ret_result;
}

ExpressionResult NegExpression::emit(){
	ExpressionResult prime_result = _prime_expr->emit();
	
	if (_prime_expr->type != int_type){
		throw "Cannot negate a non-integer";
	}	
	type = int_type;

	if (is_const(prime_result)){
		return const_fold_neg(prime_result);
	}	

	std::string prime_reg = get_reg_from_result(prime_result);

	std::string ret_reg = register_pool.get_register();
	
	std::cout << "\tsub\t" << ret_reg << ", $zero, " << prime_reg << "\t#Negate expression" << std::endl;
	register_pool.return_register(prime_reg);	

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = ret_reg;	

	return ret_result;
}

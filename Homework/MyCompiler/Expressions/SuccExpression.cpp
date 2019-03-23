#include "SuccExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>

extern RegisterPool register_pool;
extern PrimitiveType* int_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* char_type;

extern int label_num;



SuccExpression::SuccExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}


ExpressionResult SuccExpression::emit(){
	ExpressionResult prime_result = _prime_expr->emit();

	type = _prime_expr->type;
	if (type != int_type && type != bool_type && type != char_type){
		throw "Cannot call succ on something besides an int, a bool, or a char";
	}	

	std::string ret_reg = register_pool.get_register();
	
	std::string expr_reg = get_reg_from_result(prime_result);	
	
	ExpressionResult ret_result;
	
	if(type == int_type || type == char_type){
		std::cout << "\taddi\t" << ret_reg << ", " << expr_reg << ", 1\t\t#Succ expression" << std::endl;
		register_pool.return_register(expr_reg);

		ret_result.result_type = reg;
		ret_result._register = ret_reg;	
	}
	else{
		label_num++;
		std::string label = "label" + std::to_string(label_num);

		std::cout << "\tli " << ret_reg << ", 1\t\t#Pred Bool Expression" << std::endl;
		std::cout << "\tbeq " << expr_reg << ", $zero, " << label << "\t\t#Pred Bool Expression" << std::endl;
		register_pool.return_register(expr_reg);
		std::cout << "\tli " << ret_reg << ", 0\t\t#Pred Bool Expression" << std::endl;
		std::cout << label << ":" << std::endl;
		ret_result.result_type = reg;
		ret_result._register = ret_reg;	
	}
	return ret_result;
	
}

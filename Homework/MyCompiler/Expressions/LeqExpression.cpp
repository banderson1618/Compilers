#include "LeqExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>
extern int label_num;
extern PrimitiveType* bool_type;
extern RegisterPool register_pool;

LeqExpression::LeqExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

ExpressionResult LeqExpression::emit(){
	type = bool_type;
	label_num++;
	std::string label = "label" + std::to_string(label_num);

	ExpressionResult right_result = _right_expr->emit();
	ExpressionResult left_result = _left_expr->emit();

	std::string right_reg = get_reg_from_result(right_result);
	std::string left_reg = get_reg_from_result(left_result);
	
	if (_left_expr->type != _right_expr->type){
		throw "Type error: Can't >= variables with different types";
	}	

	std::string ret_reg = register_pool.get_register();
	std::cout << "\tslt\t" << ret_reg << ", " << left_reg << ", " << right_reg << "\t\t#Less Than or Equal To expression" << std::endl;
	std::cout << "bne\t" << ret_reg << ", $zero, " << label << "# right was less than left, so left is greater than right. Thus, we can return slt" << std::endl;
	
	std::cout << "\tli\t" << ret_reg << ", 1" << "\t\t#Eq after greater than expression" << std::endl;
	std::cout << "\tbeq\t" << left_reg << ", " << right_reg << ", " << label << std::endl;
	std::cout << "\tli\t" << ret_reg << ", 0" << std::endl;

	std::cout << label << ":" << std::endl;
	register_pool.return_register(left_reg);
	register_pool.return_register(right_reg);	

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = ret_reg;	

	return ret_result;
}

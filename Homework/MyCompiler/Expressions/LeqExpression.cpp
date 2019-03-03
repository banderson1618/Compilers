#include "LeqExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>
extern int label_num;
extern PrimitiveType* bool_type;

LeqExpression::LeqExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}

std::string LeqExpression::emit(RegisterPool* register_pool){
	type = bool_type;
	label_num++;
	std::string label = "label" + std::to_string(label_num);

	std::string right_result = _right_expr->emit(register_pool);
	std::string left_result = _left_expr->emit(register_pool);
	
	if (_left_expr->type != _right_expr->type){
		throw "Type error: Can't >= variables with different types";
	}	

	std::string ret_reg = register_pool->get_register();
	std::cout << "\tslt\t" << ret_reg << ", " << left_result << ", " << right_result << "\t\t#Less Than or Equal To expression" << std::endl;
	std::cout << "bne\t" << ret_reg << ", $zero, " << label << "# right was less than left, so left is greater than right. Thus, we can return slt" << std::endl;
	
	std::cout << "\tli\t" << ret_reg << ", 1" << "\t\t#Eq after greater than expression" << std::endl;
	std::cout << "\tbeq\t" << left_result << ", " << right_result << ", " << label << std::endl;
	std::cout << "\tli\t" << ret_reg << ", 0" << std::endl;

	std::cout << label << ":" << std::endl;
	register_pool->return_register(left_result);
	register_pool->return_register(right_result);
	
	return ret_reg;
}

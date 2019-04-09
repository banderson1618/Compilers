#include "ReturnStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include "Misc_Classes/FunctionDeclaration.hpp"
#include <iostream>
#include <string>
#include "Misc_Classes/Type.hpp"


extern SymbolTable symbol_table;
extern RegisterPool register_pool;

ReturnStatement::ReturnStatement(Expression* _val){
	val = _val;
}

void ReturnStatement::emit(){
	ExpressionResult val_result = val->emit();
	std::string val_reg = get_reg_from_result(val_result);

	std::cout << "\tsw\t" << val_reg << ", 0($fp)\t\t#Loading return value" << std::endl;
}

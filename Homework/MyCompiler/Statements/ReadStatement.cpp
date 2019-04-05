#include "ReadStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Type.hpp"
#include <vector>
#include <iostream>


extern PrimitiveType* int_type;
extern PrimitiveType* char_type;

ReadStatement::ReadStatement(std::vector<LvalueExpression*>* args){
	_args = args;
}

void ReadStatement::emit(){
	for (int i = 0; i < _args->size(); i++){
		LvalueExpression* lval_expr = (*_args)[i];
		ExpressionResult lval_result = lval_expr->emit();
		Lvalue* lval = lval_result.lval;
		if (lval->type == char_type){
			std::cout << "\tli\t$v0, 12" << "\t#Read Character" << std::endl;
		}
		else if (lval->type == int_type){
			std::cout << "\tli\t$v0, 5" << "\t#Read Integer" << std::endl;
		}
		std::cout << "\tsyscall" << std::endl;
		std::cout << "\tsw\t$v0, " << lval->offset << "(" << lval->base_reg << ")\t#Save result of read call into the offset" << std::endl;
 	}
}

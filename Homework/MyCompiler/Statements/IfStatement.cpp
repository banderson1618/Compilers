#include "IfStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Tables/SymbolTable.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <iostream>
#include <string>
#include "Misc_Classes/Type.hpp"


extern SymbolTable symbol_table;
extern RegisterPool register_pool;

extern PrimitiveType* bool_type;
extern PrimitiveType* int_type;

IfStatement::IfStatement(std::vector<Statement*>* _statement_seq, Expression* _bool_expr){
	statement_seq = _statement_seq;
	bool_expr = _bool_expr;
}


void IfStatement::emit(std::string next_label, std::string end_label){
	ExpressionResult bool_expr_result = bool_expr->emit();	
	std::string bool_reg = get_reg_from_result(bool_expr_result);

	std::cout << "\tbeq $zero, " << bool_reg << ", " << next_label << "\t\t# If statement branch" << std::endl;
	register_pool.return_register(bool_reg);
	
	for(int i = 0; i < statement_seq->size(); i++){
		(*statement_seq)[i]->emit();
	}
	
	std::cout << "\tj " << end_label << "\t\t#jump to end of if block" << std::endl;
	std::cout << next_label << ":" << std::endl;
}

int IfStatement::if_label_num = 1;

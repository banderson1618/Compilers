#include "WhileStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <iostream>
#include <string>
#include "Misc_Classes/Type.hpp"


extern SymbolTable symbol_table;
extern RegisterPool register_pool;

extern PrimitiveType* bool_type;
extern PrimitiveType* int_type;

WhileStatement::WhileStatement(std::vector<Statement*>* _statement_seq, Expression* _bool_expr){
	statement_seq = _statement_seq;
	bool_expr = _bool_expr;
}




void WhileStatement::emit(){
	std::string head_label = "while_head_" + std::to_string(while_label_num);
	std::string end_label = "while_end_" + std::to_string(while_label_num);
	while_label_num++;
	std::cout << head_label << ":" << std::endl;

	ExpressionResult bool_expr_result = bool_expr->emit();	
	std::string bool_reg = get_reg_from_result(bool_expr_result);

	std::cout << "\tbeq $zero, " << bool_reg << ", " << end_label << "\t\t# While loop branch" << std::endl;
	register_pool.return_register(bool_reg);
	
	for(int i = 0; i < statement_seq->size(); i++){
		(*statement_seq)[i]->emit();
	}

	std::cout << "\tj " << head_label << "\t\t#Go back to start of while loop" << std::endl;

	std::cout << end_label << ":" << std::endl;
}

int WhileStatement::while_label_num = 1;

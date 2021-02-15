#include "IfBlockStatement.hpp"
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

IfBlockStatement::IfBlockStatement(IfStatement* _first_if_statement, std::vector<IfStatement*>* _else_if_statements, std::vector<Statement*>* _else_statement){
	first_if_statement = _first_if_statement;
	else_if_statements = _else_if_statements;
	else_statement = _else_statement;
}




void IfBlockStatement::emit(){
	std::string next_label = "if_block_" + std::to_string(if_block_label_num);
	std::string end_label = "if_block_end_" + std::to_string(if_block_label_num);
	if_block_label_num++;

	first_if_statement->emit(next_label, end_label);
	
	for(int i = 0; i < else_if_statements->size(); i++){
		next_label = "if_block_" + std::to_string(if_block_label_num);
		if_block_label_num++;
		(*else_if_statements)[i]->emit(next_label, end_label);
	}

	if (else_statement != NULL){
		for(int i = 0; i < else_statement->size(); i++){
			(*else_statement)[i]->emit();
		}
	}

	std::cout << end_label << ":" << std::endl;
}

int IfBlockStatement::if_block_label_num = 1;

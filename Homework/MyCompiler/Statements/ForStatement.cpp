#include "ForStatement.hpp"
#include "Expressions/Expression.hpp"
#include "AssignStatement.hpp"
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

ForStatement::ForStatement(std::string _for_var_id, Expression* _init_var_val, Expression* _bool_expr, std::vector<Statement*>* _statement_seq, ForRunOptions to_or_downto){
	for_var_id = _for_var_id;
	for_var_init_val = _init_var_val;
	symbol_table.add_value
	switch (to_or_downto){
		case DOWNTO:{
			is_downto = true;
			break;
		}
		case TO:{
			is_downto = false;
			break;
		}
	}

	statement_seq = _statement_seq;
	bool_expr = _bool_expr;
	std::cout << "Constructing for statement" << std::endl;
}




void ForStatement::emit(){
	std::cout << "Something" << std::endl;
	std::string head_label = "for_head_" + std::to_string(for_label_num);
	std::string end_label = "for_end_" + std::to_string(for_label_num);
	for_label_num++;

	std::cout << "Emitting for statement" << std::endl;
}

int ForStatement::for_label_num = 1;

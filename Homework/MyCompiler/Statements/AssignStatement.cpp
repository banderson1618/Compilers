#include "AssignStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <iostream>
#include <string>
#include "Misc_Classes/Type.hpp"

extern SymbolTable symbol_table;
extern PrimitiveType* int_type;

AssignStatement::AssignStatement(LvalueExpression* id, Expression* val){
	_id = id;
	_val = val;
}

void AssignStatement::emit(RegisterPool* register_pool){
	std::cout << "Int size: " << int_type->size() << std::endl;
	symbol_table.add_value("my_id");
	Lvalue my_lval = symbol_table.get_value("my_id");
	std::cout << my_lval.offset << std::endl;	
	std::cout << "I am an assign statement" << std::endl;
}

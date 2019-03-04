#include "AssignStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <iostream>
#include <string>
#include "Misc_Classes/Type.hpp"

extern PrimitiveType* int_type;

extern SymbolTable symbol_table;
extern PrimitiveType* int_type;

AssignStatement::AssignStatement(Lvalue* id, Expression* val){
	_id = id;
	_val = val;
}

void AssignStatement::emit(RegisterPool* register_pool){
	std::string reg_to_save = _val->emit(register_pool);
	if (_val->type != _id->type){
		throw "Type Error in assign statement";
	}
	std::cout << "\tsw\t" << reg_to_save << ", " << _id->offset << "($sp)\t#Assign Statement" << std::endl;
	register_pool->return_register(reg_to_save);
}

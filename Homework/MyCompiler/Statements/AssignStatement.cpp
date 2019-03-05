#include "AssignStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <iostream>
#include <string>
#include "Misc_Classes/Type.hpp"

extern PrimitiveType* int_type;

extern SymbolTable symbol_table;
extern RegisterPool register_pool;
extern PrimitiveType* int_type;

AssignStatement::AssignStatement(Lvalue* id, Expression* val){
	_id = id;
	_val = val;
}

void AssignStatement::emit(){
	std::string reg_to_save = get_reg_from_result(_val->emit());

	if (_val->type != int_type){
		std::cout << "Expression is not integer" << std::endl;
	}

	if (_id->type != int_type){
		std::cout << "Lvalue is not integer" << std::endl;
	}
	if (_val->type != _id->type){
		throw "Type Error in assign statement";
	}
	std::cout << "\tsw\t" << reg_to_save << ", " << _id->offset << "($sp)\t#Assign Statement" << std::endl;
	register_pool.return_register(reg_to_save);
}

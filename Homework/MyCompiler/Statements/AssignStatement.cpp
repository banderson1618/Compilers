#include "AssignStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <iostream>
#include <string>

AssignStatement::AssignStatement(LvalueExpression* id, Expression* val){
	_id = id;
	_val = val;
}

void AssignStatement::emit(RegisterPool* register_pool){
	
	std::cout << "I am an assign statement" << std::endl;
}

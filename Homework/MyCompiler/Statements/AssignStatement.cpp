#include "AssignStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include <iostream>

AssignStatement::AssignStatement(LvalueExpression* id, Expression* val){
	_id = id;
	_val = val;
}

void AssignStatement::emit(){
	std::cout << "I am an assign statement" << std::endl;
}

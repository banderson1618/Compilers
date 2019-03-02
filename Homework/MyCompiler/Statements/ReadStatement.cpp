#include "ReadStatement.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <vector>
#include <iostream>

ReadStatement::ReadStatement(std::vector<Lvalue*>* args){
	_args = args;
}

void ReadStatement::emit(){
	//std::cout << "I am a read statement" << std::endl;
}

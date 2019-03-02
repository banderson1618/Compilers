#include "WriteStatement.hpp"
#include "Expressions/Expression.hpp"
#include <vector>
#include <iostream>

WriteStatement::WriteStatement(std::vector<Expression*>* args){
	_args = args;
}

void WriteStatement::emit(){
	//std::cout << "I am a write statement" << std::endl;
}



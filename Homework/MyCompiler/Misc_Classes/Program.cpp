#include "Program.hpp"
#include "Statements/Statement.hpp"
#include <vector>
#include <iostream>

Program::Program(std::vector<Statement*>* block_statements){
	_block_statements = block_statements;
}

void Program::emit(){
	std::cout << "Emiting..." << std::endl;
	for(int i = 0; i < _block_statements->size(); i++){
		(*_block_statements)[i]->emit();
	}
}

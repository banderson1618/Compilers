#include "Program.hpp"
#include "Statements/Statement.hpp"
#include <vector>
#include <iostream>


Program::Program(std::vector<Statement*>* block_statements){
	_block_statements = block_statements;
}

void Program::emit(){
	std::cout << ".globl main" << std::endl;
	std::cout << "#Start program here" << std::endl;
	std::cout << "main:" << std::endl;
	for(int i = 0; i < _block_statements->size(); i++){
		(*_block_statements)[i]->emit();
	}
	std::cout << "\tli\t$v0, 10\t\t#End of program" << std::endl;
	std::cout << "\tsyscall" << std::endl;
	std::cout << ".data" << std::endl;
}

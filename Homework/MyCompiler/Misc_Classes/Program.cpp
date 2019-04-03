#include "Program.hpp"
#include "Statements/Statement.hpp"
#include "StringTable.hpp"
#include <vector>
#include <iostream>

extern StringTable string_table;


Program::Program(std::vector<Statement*>* block_statements){
	_block_statements = block_statements;
}

void Program::emit_function_declarations(){

}

void Program::emit(){
	std::cout << ".globl main" << std::endl;
	std::cout << "#Start program here" << std::endl;
	std::cout << "main:" << std::endl;
	std::cout << "\tla\t$gp, GLOBAL\t\t#load in the global address" << std::endl;
	std::cout << "\tj\tprogram_start\t\t#Jump to main method\n" << std::endl;

	emit_function_declarations();

	std::cout << "program_start:" << std::endl;
	for(int i = 0; i < _block_statements->size(); i++){
		(*_block_statements)[i]->emit();
	}

	std::cout << "\tli\t$v0, 10\t\t#End of program" << std::endl;
	std::cout << "\tsyscall" << std::endl;
	std::cout << ".data" << std::endl;
	string_table.write_strings();

	std::cout << "\n\n.align 2" << std::endl;
	std::cout << "GLOBAL:" << std::endl;
}

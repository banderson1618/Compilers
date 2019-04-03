#ifndef PROGRAM_H
#define PROGRAM_H

#include "Statements/Statement.hpp"
#include <vector>

class Program{
	public:
		Program(std::vector<Statement*>*);
		void emit();
	private:
		void emit_function_declarations();
		std::vector<Statement*>* _block_statements;

};

#endif

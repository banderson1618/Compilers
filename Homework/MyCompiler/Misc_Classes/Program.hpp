#ifndef PROGRAM_H
#define PROGRAM_H

#include "Statements/Statement.hpp"
#include "RegisterPool.hpp"
#include <vector>

class Program{
	public:
		Program(std::vector<Statement*>*);
		void emit(RegisterPool*);
	private:
		std::vector<Statement*>* _block_statements;

};

#endif

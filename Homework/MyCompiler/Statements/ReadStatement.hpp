#ifndef READ_STATEMENT_H
#define READ_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <vector>

class ReadStatement : public Statement {
	public:
		ReadStatement(std::vector<Lvalue*>*);
		void emit();		
	private:
		std::vector<Lvalue*>* _args;
};


#endif

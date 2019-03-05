#ifndef WRITE_STATEMENT_H
#define WRITE_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"
#include <vector>

class WriteStatement : public Statement {
	public:
		WriteStatement(std::vector<Expression*>*);
		void emit();
	private:
		std::vector<Expression*>* _args;
};


#endif

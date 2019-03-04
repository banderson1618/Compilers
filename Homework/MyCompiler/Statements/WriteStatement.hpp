#ifndef WRITE_STATEMENT_H
#define WRITE_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <vector>

class WriteStatement : public Statement {
	public:
		WriteStatement(std::vector<Expression*>*);
		void emit(RegisterPool*);
	private:
		std::vector<Expression*>* _args;
};


#endif

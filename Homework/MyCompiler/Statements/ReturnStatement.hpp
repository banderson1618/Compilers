#ifndef RETURN_STATEMENT_H
#define RETURN_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"


class ReturnStatement : public Statement {
	public:
		ReturnStatement(Expression*);
		void emit();
	private:
		Expression* val;
};


#endif

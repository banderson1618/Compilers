#ifndef ASSIGN_STATEMENT_H
#define ASSIGN_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"

class AssignStatement : public Statement {
	public:
		AssignStatement(LvalueExpression*, Expression*);
		void emit(RegisterPool*);
	private:
		LvalueExpression* _id;
		Expression* _val;
};


#endif

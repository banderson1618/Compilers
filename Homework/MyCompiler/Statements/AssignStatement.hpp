#ifndef ASSIGN_STATEMENT_H
#define ASSIGN_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"


class AssignStatement : public Statement {
	public:
		AssignStatement(LvalueExpression*, Expression*);
		void emit();
	private:
		void assign_array(ExpressionResult);
		void assign_single_val(ExpressionResult);
		void copy_big_data_single_val(Lvalue*);
		LvalueExpression* _id;
		Expression* _val;
};


#endif

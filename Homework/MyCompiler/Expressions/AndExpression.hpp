#ifndef AND_EXPRESSION_H
#define AND_EXPRESSION_H

#include "Expression.hpp"

class AndExpression : public Expression{
	public:
		AndExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif

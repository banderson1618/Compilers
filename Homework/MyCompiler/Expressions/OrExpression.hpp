#ifndef OR_EXPRESSION_H
#define OR_EXPRESSION_H

#include "Expression.hpp"

class OrExpression : public Expression{
	public:
		OrExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif

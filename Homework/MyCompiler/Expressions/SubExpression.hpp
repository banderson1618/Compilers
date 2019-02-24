#ifndef SUB_EXPRESSION_H
#define SUB_EXPRESSION_H

#include "Expression.hpp"

class SubExpression : public Expression{
	public:
		SubExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif

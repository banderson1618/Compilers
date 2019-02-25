#ifndef INT_EXPRESSION_H
#define INT_EXPRESSION_H

#include "Expression.hpp"

class IntExpression : public Expression{
	public:
		IntExpression(int);

	private:
		int _val;
};

#endif

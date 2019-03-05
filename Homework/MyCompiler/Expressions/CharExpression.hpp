#ifndef CHAR_EXPRESSION_H
#define CHAR_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class CharExpression : public Expression{
	public:
		CharExpression(char);
		ExpressionResult emit();

	private:
		char _val;
};

#endif

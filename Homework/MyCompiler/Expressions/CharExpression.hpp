#ifndef CHAR_EXPRESSION_H
#define CHAR_EXPRESSION_H

#include "Expression.hpp"

class CharExpression : public Expression{
	public:
		CharExpression(char);

	private:
		char _val;
};

#endif

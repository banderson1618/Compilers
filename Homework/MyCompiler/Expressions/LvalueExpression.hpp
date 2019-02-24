#ifndef LVALUE_EXPRESSION_H
#define LVALUE_EXPRESSION_H

#include "Expression.hpp"

class LvalueExpression : public Expression{
	public:
		LvalueExpression(char*);

	private:
		char* _id;
};

#endif

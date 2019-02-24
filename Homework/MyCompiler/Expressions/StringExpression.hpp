#ifndef STRING_EXPRESSION_H
#define STRING_EXPRESSION_H

#include "Expression.hpp"

class StringExpression : public Expression{
	public:
		StringExpression(char*);

	private:
		char* _val;
};

#endif

#ifndef STRING_EXPRESSION_H
#define STRING_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class StringExpression : public Expression{
	public:
		StringExpression(char*);
		ExpressionResult emit();

	private:
		char* _val;
		std::string str_val;
};

#endif

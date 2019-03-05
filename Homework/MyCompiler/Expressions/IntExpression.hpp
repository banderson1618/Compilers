#ifndef INT_EXPRESSION_H
#define INT_EXPRESSION_H


#include "Expression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>

class IntExpression : public Expression{
	public:
		IntExpression(int);
		ExpressionResult emit();

	private:
		int _val;
};

#endif

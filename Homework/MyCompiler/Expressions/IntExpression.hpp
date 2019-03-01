#ifndef INT_EXPRESSION_H
#define INT_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class IntExpression : public Expression{
	public:
		IntExpression(int);
		int getVal();
		std::string emit(RegisterPool*);

	private:
		int _val;
};

#endif

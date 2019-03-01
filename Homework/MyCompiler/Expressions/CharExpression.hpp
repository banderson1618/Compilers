#ifndef CHAR_EXPRESSION_H
#define CHAR_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class CharExpression : public Expression{
	public:
		CharExpression(char);
		std::string emit(RegisterPool*);

	private:
		char _val;
};

#endif

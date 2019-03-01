#ifndef STRING_EXPRESSION_H
#define STRING_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class StringExpression : public Expression{
	public:
		StringExpression(char*);
		std::string emit(RegisterPool*);

	private:
		char* _val;
};

#endif

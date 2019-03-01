#ifndef LVALUE_EXPRESSION_H
#define LVALUE_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class LvalueExpression : public Expression{
	public:
		LvalueExpression(char*);
		char* getID();
		std::string emit(RegisterPool*);

	private:
		char* _id;
};

#endif

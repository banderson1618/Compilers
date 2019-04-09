#ifndef FUNCTION_CALL_EXPRESSION_H
#define FUNCTION_CALL_EXPRESSION_H

#include "Expression.hpp"
#include "Expressions/Expression.hpp"
#include <vector>
#include <string>


class FunctionCallExpression : public Expression {
	public:
		FunctionCallExpression(std::string, std::vector<Expression*>*);
		ExpressionResult emit();
	private:
		std::string id;
		std::vector<Expression*>* args;
		
};


#endif

#ifndef FUNC_EXPRESSION_H
#define FUNC_EXPRESSION_H

#include "Expression.hpp"
#include <vector>

class FuncExpression : public Expression{
	public:
		FuncExpression(char*, std::vector<Expression*>*);

	private:
		char* _id;
		std::vector<Expression*>* _args_list;
};

#endif

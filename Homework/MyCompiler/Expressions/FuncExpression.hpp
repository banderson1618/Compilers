#ifndef FUNC_EXPRESSION_H
#define FUNC_EXPRESSION_H

#include "Expression.hpp"
#include <vector>
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class FuncExpression : public Expression{
	public:
		FuncExpression(char*, std::vector<Expression*>*);
		std::string emit(RegisterPool*);

	private:
		char* _id;
		std::vector<Expression*>* _args_list;
};

#endif

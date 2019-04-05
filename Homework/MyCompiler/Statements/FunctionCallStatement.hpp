#ifndef FUNCTION_CALL_STATEMENT_H
#define FUNCTION_CALL_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"
#include <vector>
#include <string>


class FunctionCallStatement : public Statement {
	public:
		FunctionCallStatement(std::string, std::vector<Expression*>*);
		void emit();
	private:
		std::string id;
		std::vector<Expression*>* args;
		
};


#endif

#ifndef IF_STATEMENT_H
#define IF_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"


class IfStatement : public Statement {
	public:
		IfStatement(std::vector<Statement*>*, Expression*);
		void emit(std::string, std::string);
	private:
		std::vector<Statement*>* statement_seq;
		Expression* bool_expr;
		static int if_label_num;		
};


#endif

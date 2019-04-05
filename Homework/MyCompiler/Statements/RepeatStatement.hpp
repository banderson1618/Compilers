#ifndef REPEAT_STATEMENT_H
#define REPEAT_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"


class RepeatStatement : public Statement {
	public:
		RepeatStatement(std::vector<Statement*>*, Expression*);
		void emit();
	private:
		std::vector<Statement*>* statement_seq;
		Expression* bool_expr;
		static int repeat_label_num;
		
};


#endif

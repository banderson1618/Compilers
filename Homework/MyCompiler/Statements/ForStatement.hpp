#ifndef FOR_STATEMENT_H
#define FOR_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"


enum ForRunOptions{
	DOWNTO,
	TO
};

class ForStatement : public Statement {
	public:
		ForStatement(std::string, Expression*, Expression*, std::vector<Statement*>*, ForRunOptions);
		void emit();
	private:
		std::string for_var_id;
		Expression* for_var_init_val;		
		Expression* bool_expr;
		bool is_downto;
		std::vector<Statement*>* statement_seq;
		static int for_label_num;		
};


#endif

#ifndef NULL_STATEMENT_H
#define NULL_STATEMENT_H

#include "Statement.hpp"

class NullStatement : public Statement {
	public:
		NullStatement();
		void emit();
};


#endif

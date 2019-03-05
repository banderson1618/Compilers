#ifndef NULL_STATEMENT_H
#define NULL_STATEMENT_H

#include "Statement.hpp"
#include "Misc_Classes/RegisterPool.hpp"

class NullStatement : public Statement {
	public:
		NullStatement();
		void emit();
};


#endif

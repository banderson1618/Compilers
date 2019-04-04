#ifndef BODY_H
#define BODY_H

#include "UsefulFunctions.hpp"
#include "Statements/Statement.hpp"


class Body {
	public:
		Body(std::vector<ConstDecl*>*, std::vector<TypeDecl*>*, std::vector<VarDecl*>*, std::vector<Statement*>*);

	private:
		std::vector<ConstDecl*>* const_decls;
		std::vector<TypeDecl*>* type_decls;
		 std::vector<VarDecl*>* var_decls;
		 std::vector<Statement*>* statement_seq;
};


#endif

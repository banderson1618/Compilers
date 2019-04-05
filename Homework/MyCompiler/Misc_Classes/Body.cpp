#include "UsefulFunctions.hpp"
#include "Statements/Statement.hpp"
#include "Body.hpp"
#include <iostream>


Body::Body(std::vector<ConstDecl*>* _const_decls, std::vector<TypeDecl*>* _type_decls, std::vector<VarDecl*>* _var_decl, std::vector<Statement*>* _statement_list) {
	const_decls = _const_decls;
	type_decls = _type_decls;
	var_decls = _var_decl;
	statement_seq = _statement_list;
}

void Body::emit(){
	for(int i = 0; i < statement_seq->size(); i++){
		(*statement_seq)[i]->emit();
	}
}

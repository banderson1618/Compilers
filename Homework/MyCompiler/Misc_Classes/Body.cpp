#include "UsefulFunctions.hpp"
#include "Statements/Statement.hpp"
#include "SymbolTable.hpp"
#include "Body.hpp"
#include <iostream>


extern SymbolTable symbol_table;

Body::Body(std::vector<ConstDecl*>* _const_decls, std::vector<TypeDecl*>* _type_decls, std::vector<VarDecl*>* _var_decl, std::vector<Statement*>* _statement_list) {
	const_decls = _const_decls;
	type_decls = _type_decls;
	var_decls = _var_decl;
	statement_seq = _statement_list;
}


void Body::write_epilogue(){
	std::cout << "\tjr\t$ra\t\t#Exit function" << std::endl;
}

void Body::emit(){
	if (statement_seq == NULL) {
		std::cout << "Something wrong" << std::endl;
	}

	int local_var_size = 0;
	for(int i = 0; i < var_decls->size(); i++){
		auto var_decl = (*var_decls)[i];
		auto var_type = get_type_from_type_creator(var_decl->type_creator);
		add_vars_to_symbol_table(var_decl->id_list, var_type, "$sp");
		local_var_size += var_type->size() * var_decl->id_list.size();
	}

	std::cout << "\taddi\t$sp, $sp, " << local_var_size << "\t\t#add to sp to make room for local variables" << std::endl;

	for(int i = 0; i < statement_seq->size(); i++){
		(*statement_seq)[i]->emit();
	}
	symbol_table.reset_sp_offset();

	write_epilogue();
}

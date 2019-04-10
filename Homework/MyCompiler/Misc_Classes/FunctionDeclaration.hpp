#ifndef FUNC_DECL_H
#define FUNC_DECL_H

#include "UsefulFunctions.hpp"
#include "Body.hpp"
#include "Type.hpp"

class FunctionDeclaration{
	public:
		FunctionDeclaration(std::string id, std::vector<Param*>*, Body*, TypeCreator*);
		void emit(std::string);

	private:
		void write_prologue();
		void write_epilogue();
		void add_to_func_table(std::string);
		void add_args_to_symbol_table();
		std::string id;
		std::vector<Param*>* params;
		Body* body;
		Type* ret_type;
		TypeCreator* ret_type_creator;
};


#endif

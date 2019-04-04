#ifndef PROGRAM_H
#define PROGRAM_H

#include "Statements/Statement.hpp"
#include "UsefulFunctions.hpp"
#include "FunctionDeclaration.hpp"
#include <vector>

class Program{
	public:
		Program(std::vector<ConstDecl*>*, std::vector<TypeDecl*>*, std::vector<VarDecl*>*, std::vector<FunctionDeclaration*>*, std::vector<Statement*>*);
		void emit();
	private:
		void emit_function_declarations();
		std::vector<Statement*>* _block_statements;
		std::vector<ConstDecl*>* const_decls;
		std::vector<TypeDecl*>* type_decls;
		std::vector<VarDecl*>* var_decls;
		std::vector<FunctionDeclaration*>* func_decls;
		void add_consts();
		void add_types();
		void add_vars();
};

#endif

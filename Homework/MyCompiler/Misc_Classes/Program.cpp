#include "Program.hpp"
#include "Statements/Statement.hpp"
#include "Tables/StringTable.hpp"
#include "Tables/TypesTable.hpp"
#include "Tables/SymbolTable.hpp"
#include "UsefulFunctions.hpp"
#include "FunctionDeclaration.hpp"
#include "Type.hpp"
#include <vector>
#include <iostream>

extern StringTable string_table;
extern TypesTable types_table;
extern SymbolTable symbol_table;


Program::Program(std::vector<ConstDecl*>* _const_decls, std::vector<TypeDecl*>* _type_decls, std::vector<VarDecl*>* _var_decls, std::vector<FunctionDeclaration*>* _func_decls, std::vector<Statement*>* block_statements){
	_block_statements = block_statements;
	const_decls = _const_decls;
	type_decls = _type_decls;
	var_decls = _var_decls;
	func_decls = _func_decls;
}

void Program::add_consts(){
	for(int i = 0; i < const_decls->size(); i++){
		auto const_decl = (*const_decls)[i];
		add_const_to_table(const_decl->id, const_decl->expr);
	}
}

void Program::add_types(){
	for(int i = 0; i < type_decls->size(); i++){
		auto type_decl = (*type_decls)[i];
		add_type_to_table(type_decl->id, get_type_from_type_creator(type_decl->type_creator));
	}
}

void Program::add_vars(){
	for(int i = 0; i < var_decls->size(); i++){
		auto var_decl = (*var_decls)[i];
		add_vars_to_symbol_table(var_decl->id_list, get_type_from_type_creator(var_decl->type_creator));
	}
}

void Program::declare_functions(){
	for(int i = 0; i < func_decls->size(); i++){
		auto func_decl = (*func_decls)[i];
		std::string label = "func_label_" + std::to_string(i+1);
		func_decl->emit(label);
	}
}


void Program::emit(){
	add_consts();
	add_types();
	add_vars();


	std::cout << ".globl main" << std::endl;
	std::cout << "#Start program here" << std::endl;
	std::cout << "main:" << std::endl;
	std::cout << "\tla\t$gp, GLOBAL\t\t#load in the global address" << std::endl;
	std::cout << "\tj\tprogram_start\t\t#Jump to main method\n" << std::endl;

	declare_functions();

	std::cout << "program_start:" << std::endl;
	for(int i = 0; i < _block_statements->size(); i++){
		(*_block_statements)[i]->emit();
	}

	std::cout << "\tli\t$v0, 10\t\t#End of program" << std::endl;
	std::cout << "\tsyscall" << std::endl;
	std::cout << ".data" << std::endl;
	string_table.write_strings();

	std::cout << "\n\n.align 2" << std::endl;
	std::cout << "GLOBAL:" << std::endl;
}


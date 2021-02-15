#include "FunctionDeclaration.hpp"
#include "UsefulFunctions.hpp"
#include "Tables/FunctionTable.hpp"
#include "Tables/SymbolTable.hpp"
#include "Body.hpp"
#include "Type.hpp"

#include <iostream>
#include <vector>

extern FunctionTable function_table;
extern SymbolTable symbol_table;

FunctionDeclaration::FunctionDeclaration(std::string _id, std::vector<Param*>* _params, Body* _body, TypeCreator* _ret_type){
	id = _id;
	params = _params;
	body = _body;
	ret_type_creator = _ret_type;
}


std::vector<Type*> get_type_vector_from_params(std::vector<Param*>* params){
	std::vector<Type*> type_vec;
	for(int i = 0; i < params->size(); i++){
		Param* param = (*params)[i];
		Type* param_type = get_type_from_type_creator(param->type_creator);
		for(int j = 0; j < param->id_list.size(); j++){
			type_vec.push_back(param_type);			
		}
	}
	return type_vec;
}

void FunctionDeclaration::add_to_func_table(std::string label){
	FuncPrototype func_prototype;
	func_prototype.func_label = label;
	func_prototype.arg_types = get_type_vector_from_params(params);
	func_prototype.ret_type = ret_type;
	function_table.add_value(id, func_prototype);
}

void FunctionDeclaration::add_args_to_symbol_table(){
	for(int i = 0; i < params->size(); i++){
		Param* param = (*params)[i];
		Type* param_type = get_type_from_type_creator(param->type_creator);
		for(int j = 0; j < param->id_list.size(); j++){
			symbol_table.add_value(param->id_list[j], "$fp", param_type);	
		}
	}
	symbol_table.reset_fp_offset();
}


void FunctionDeclaration::emit(std::string label){
	ret_type = get_type_from_type_creator(ret_type_creator);
	add_to_func_table(label);

	symbol_table.enter_scope();
	if(ret_type != NULL) symbol_table.set_fp_offset(ret_type->size());

	add_args_to_symbol_table();

	std::cout << label << ":" << std::endl;
	
	body->emit();

	symbol_table.exit_scope();
}

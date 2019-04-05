#include "FunctionDeclaration.hpp"
#include "UsefulFunctions.hpp"
#include "FunctionTable.hpp"
#include "Body.hpp"
#include "Type.hpp"

#include <iostream>
#include <vector>

extern FunctionTable function_table;

FunctionDeclaration::FunctionDeclaration(std::string _id, std::vector<Param*>* _params, Body* _body, TypeCreator* _ret_type){
	id = _id;
	params = _params;
	body = _body;
	ret_type = ret_type;
}

void FunctionDeclaration::write_prologue(){

}

void FunctionDeclaration::write_epilogue(){
	std::cout << "\tjr\t$ra\t\t#Exit function" << std::endl;
}

std::vector<Type*> get_type_vector_from_params(std::vector<Param*>* params){
	std::vector<Type*> type_vec;
	for(int i = 0; i < params->size(); i++){
		Param* param = (*params)[i];
		type_vec.push_back(get_type_from_type_creator(param->type_creator));
	}
	return type_vec;
}

void FunctionDeclaration::add_to_func_table(std::string label){
	FuncPrototype func_prototype;
	func_prototype.func_label = label;
	func_prototype.arg_types = get_type_vector_from_params(params);
	function_table.add_value(id, func_prototype);
}


void FunctionDeclaration::emit(std::string label){
	add_to_func_table(label);

	std::cout << label << ":" << std::endl;
	write_prologue();
	
	body->emit();	

	write_epilogue();
	

}

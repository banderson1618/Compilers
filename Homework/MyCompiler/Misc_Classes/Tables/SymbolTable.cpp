#include "SymbolTable.hpp"

#include <string>
#include <map>
#include <vector>
#include <iostream>

SymbolTable::SymbolTable(){
	std::map<std::string, Lvalue> first_table;
	tables.push_back(first_table);
	next_gp_offset = 0;
	next_sp_offset = 0;
	next_fp_offset = 0;
}

void SymbolTable::add_value(std::string id, std::string base_reg, Type* type){
	Lvalue new_lval;
	new_lval.base_reg = base_reg;
	if(base_reg == "$gp"){
		new_lval.offset = next_gp_offset;
		next_gp_offset += type->size(); 
	}
	else if(base_reg == "$sp"){
		new_lval.offset = next_sp_offset;
		next_sp_offset += type->size(); 
	}
	else if(base_reg == "$fp"){
		new_lval.offset = next_fp_offset;
		next_fp_offset += type->size(); 
	}
	new_lval.type = type;
	new_lval.is_const = false;
	tables.back().insert(std::pair<std::string, Lvalue>(id, new_lval));
}

void SymbolTable::add_value(std::string id, Type* type, std::string str_label){
	Lvalue new_lval;
	new_lval.type = type;
	new_lval.string_label = str_label;
	new_lval.is_const = false;
	tables.back().insert(std::pair<std::string, Lvalue>(id, new_lval));
}


void SymbolTable::set_fp_offset(int offset_start){
	next_fp_offset = offset_start;
}

void SymbolTable::reset_fp_offset(){
	next_fp_offset = 0;
}


int SymbolTable::get_scope(){
	return tables.size();
}

void SymbolTable::reset_sp_offset(){
	next_sp_offset = 0;
}

void SymbolTable::add_const_val(std::string id, Type* type, int const_val){
	Lvalue new_lval;
	new_lval.offset = next_gp_offset;
	new_lval.type = type;
	new_lval.is_const = true;
	new_lval.const_val = const_val;
	next_gp_offset += type->size(); 
	tables.back().insert(std::pair<std::string, Lvalue>(id, new_lval));
}


Lvalue SymbolTable::get_value(std::string id){
	for(int i = tables.size() - 1; i >= 0; i--){
		auto ret_val = tables[i].find(id);
		if(ret_val != tables[i].end()) {
			return ret_val->second;
		}
	}
	throw "Could not find variable in symbol table";
}

void SymbolTable::enter_scope(){
	std::map<std::string, Lvalue> next_table;
	tables.push_back(next_table);
}

void SymbolTable::exit_scope(){
	tables.pop_back();
}

SymbolTable symbol_table;

#include "RecordType.hpp"
#include <iostream>


std::string get_base_reg(){
	return "$gp";
}


RecordType::RecordType(std::vector<std::vector<std::string>> id_lists, std::vector<Type*> type_list)
{
	this->_size = 0;
	this->small_sym_table = SymbolTable();
	if (id_lists.size() != type_list.size()){
		throw "Can't construct record with differently sized lists!";
	}

	for(int i = 0; i < id_lists.size(); i++){
		Type* curr_type = type_list[i];
		std::vector<std::string> curr_id_list = id_lists[i];
		for(int j = 0; j < curr_id_list.size(); j++){
			std::string curr_id = curr_id_list[j];
			this->small_sym_table.add_value(curr_id, get_base_reg(), curr_type);
			this->_size += curr_type->size();
		}
	}
}

Lvalue RecordType::get_value(std::string given_id){
	return this->small_sym_table.get_value(given_id);
}

int RecordType::size(){
	return _size;
}

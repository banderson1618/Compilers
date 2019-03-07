#include "RecordType.hpp"
#include <iostream>


RecordType::RecordType(std::vector<std::vector<std::string>> id_lists, std::vector<Type*> type_list)
{
	this->_size = 0;
	this->small_sym_table = SymbolTable();
	if (id_lists.size() != type_list.size()){
		throw "Can't construct record with differently sized lists!";
	}

	for(int i = 0; i < id_lists.size(); i++){
		std::cout << 1 << std::endl;
		Type* curr_type = type_list[i];
		std::cout << 2 << std::endl;
		std::vector<std::string> curr_id_list = id_lists[i];
		std::cout << 3 << std::endl;
		for(int j = 0; j < curr_id_list.size(); j++){
			std::cout << 4 << std::endl;
			std::string curr_id = curr_id_list[j];
			std::cout << 5 << std::endl;
			std::cout << curr_id << std::endl;
			this->small_sym_table.add_value(curr_id, curr_type);
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

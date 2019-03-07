#ifndef RECORD_TYPE_H
#define RECORD_TYPE_H

#include "Type.hpp"
#include "SymbolTable.hpp"
#include <vector>


class RecordType : public Type{
	public:
		RecordType(std::vector<std::vector<std::string>>, std::vector<Type*>);
		Lvalue get_value(std::string);
		int size();
	private:
		int _size;
		SymbolTable small_sym_table;
};



struct RecItem{
	std::vector<std::string> id_list;
	Type* type;
};


#endif

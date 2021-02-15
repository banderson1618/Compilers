#include <iostream>
#include <fstream>
#include <string>
#include "Misc_Classes/Program.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Tables/SymbolTable.hpp"
#include "Misc_Classes/Tables/TypesTable.hpp"
#include "Misc_Classes/Tables/StringTable.hpp"
#include "Misc_Classes/Tables/FunctionTable.hpp"
#include "Misc_Classes/Type.hpp"

extern int yyparse();
extern FILE *yyin;

extern SymbolTable symbol_table;
extern TypesTable types_table;
extern StringTable string_table;
extern FunctionTable function_table;
extern RegisterPool register_pool;

extern int label_num;

extern PrimitiveType* string_type;
extern PrimitiveType* int_type;
extern PrimitiveType* char_type;
extern PrimitiveType* bool_type;

void set_predefined_types(TypesTable &types_table){
	types_table.add_value("integer", int_type);
	types_table.add_value("char", char_type);
	types_table.add_value("boolean", bool_type);
	types_table.add_value("string", string_type);
	types_table.add_value("INTEGER", int_type);
	types_table.add_value("CHAR", char_type);
	types_table.add_value("BOOLEAN", bool_type);
	types_table.add_value("STRING", string_type);
	types_table.enter_scope();
}

void set_predefined_values(SymbolTable &symbol_table){
	symbol_table.add_const_val("true", bool_type, 1);
	symbol_table.add_const_val("false", bool_type, 0);
	symbol_table.add_const_val("TRUE", bool_type, 1);
	symbol_table.add_const_val("FALSE", bool_type, 0);
	symbol_table.enter_scope();
}


main(int argc, char** argv){
	symbol_table = SymbolTable();
	types_table = TypesTable();
	string_table = StringTable();
	function_table = FunctionTable();
	register_pool = RegisterPool();
	int_type = new PrimitiveType();
	char_type = new PrimitiveType();
	bool_type = new PrimitiveType();
	string_type = new PrimitiveType();
	label_num = 0;	

	set_predefined_types(types_table);
	set_predefined_values(symbol_table);
	try{
		yyparse();
	}
	catch(const char* e){
		std::cerr << "ERROR FOUND: " << e << std::endl;
		return -1;
	}
}













#include <iostream>
#include <fstream>
#include <string>
#include "Misc_Classes/Program.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/TypesTable.hpp"
#include "Misc_Classes/StringTable.hpp"
#include "Misc_Classes/Type.hpp"

extern int yyparse();
extern FILE *yyin;

extern SymbolTable symbol_table;
extern TypesTable types_table;
extern StringTable string_table;
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
	register_pool = RegisterPool();
	int_type = new PrimitiveType();
	char_type = new PrimitiveType();
	bool_type = new PrimitiveType();
	string_type = new PrimitiveType();

	label_num = 0;
		
	if (argc < 2){
		std::cout << "Missing file argument" << std::endl;
		return -1;
	}

	

	std::string output_name;
	if (argc >= 3){
		output_name = argv[2];
	}
	else{
		output_name = "out.asm";
	}
	
	FILE *myfile = fopen(argv[1], "r");
	if(!myfile){
		std::cout << "Can't open file" << std::endl;
		return -1;
	}

	yyin = myfile;

	std::ofstream out(output_name);
	auto *coutbuf = std::cout.rdbuf();
	std::cout.rdbuf(out.rdbuf());

	// doing this here so it gets in the file
	set_predefined_types(types_table);
	set_predefined_values(symbol_table);
	try{
		yyparse();
	}
	catch(const char* e){
		std::cerr << "ERROR FOUND: " << e << std::endl;
		return -1;
	}
	std::cout.rdbuf(coutbuf);
}













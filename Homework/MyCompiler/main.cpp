#include <iostream>
#include <fstream>
#include <string>
#include "Misc_Classes/Program.hpp"
#include "Misc_Classes/RegisterPool.hpp"

extern int yyparse();
extern FILE *yyin;
extern Program* parse_output;

main(int argc, char** argv){
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

	yyparse();

	std::ofstream out_file;
	out_file.open(output_name);
	out_file << "#Empty asm file\n";
	// write asm here, probably?
	out_file.close();	
}

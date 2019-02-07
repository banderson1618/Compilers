#include <iostream>

extern int yyparse();
extern FILE *yyin;


int main(int argc, char** argv){
	if (argc < 2){
		std::cout << "Missing file argument" << std::endl;
		return -1;
	}
	
	FILE *myfile = fopen(argv[1], "r");
	if(!myfile){
		std::cout << "Can't open file" << std::endl;
		return -1;
	}

	yyin = myfile;

	yyparse();
	std::cout << "Parsed correctly" << std::endl;
}

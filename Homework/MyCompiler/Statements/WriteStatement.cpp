#include "WriteStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <vector>
#include <iostream>

extern PrimitiveType* int_type;
extern PrimitiveType* char_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* string_type;

WriteStatement::WriteStatement(std::vector<Expression*>* args){
	_args = args;
}

void WriteStatement::emit(RegisterPool* register_pool){
	for (int i = 0; i < _args->size(); i++){
		std::string reg_to_print = (*_args)[i]->emit(register_pool);
		Expression* expr = (*_args)[i];
		if (expr->type == string_type){
			std::cout << "\tli\t$v0,4" << "\t\t#Write string" << std::endl;
			std::cout << "\tla\t$a0, " << reg_to_print << std::endl;
		}
		else if (expr->type == char_type){
			std::cout << "\tli\t$v0,11" << "\t\t#Write character"<< std::endl;
			std::cout << "\tmove\t$a0, " << reg_to_print << std::endl;
			register_pool->return_register(reg_to_print);
		}
		else if (expr->type == bool_type){
			std::cout << "\tli\t$v0,1" << "\t\t#Write bool"<< std::endl; // right now, it's just a copy of the integer print code
			std::cout << "\tmove\t$a0, " << reg_to_print << std::endl;	// maybe change later to actually print "true" or "false?
			register_pool->return_register(reg_to_print);
		}
		else{
			std::cout << "\tli\t$v0,1" << "\t\t#Write integer"<< std::endl;
			std::cout << "\tmove\t$a0, " << reg_to_print << std::endl;
			register_pool->return_register(reg_to_print);
		}
		std::cout << "\tsyscall" << std::endl;
 	}
}



#include "ReadStatement.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Type.hpp"
#include <vector>
#include <iostream>


extern PrimitiveType* int_type;
extern PrimitiveType* char_type;

ReadStatement::ReadStatement(std::vector<Lvalue*>* args){
	_args = args;
}

void ReadStatement::emit(RegisterPool* register_pool){
	for (int i = 0; i < _args->size(); i++){
		Lvalue* lval = (*_args)[i];
		if (lval->type == char_type){
			std::cout << "\tli\t$v0, 12" << "\t#Read Character" << std::endl;
		}
		else if (lval->type == int_type){
			std::cout << "\tli\t$v0, 5" << "\t#Read Integer" << std::endl;
		}
		std::cout << "\tsyscall" << std::endl;
		std::cout << "\tsw\t$v0, " << lval->offset << "($sp)\t#Save result of read call into the offset" << std::endl;
 	}
}

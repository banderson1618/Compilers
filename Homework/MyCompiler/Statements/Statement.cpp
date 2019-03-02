#include "Statement.hpp"
#include <iostream>

Statement::Statement(){

}

void Statement::emit(RegisterPool* register_pool){
	std::cout << "This shouldn't print" << std::endl;
	return;
}


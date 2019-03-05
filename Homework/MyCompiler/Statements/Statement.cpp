#include "Statement.hpp"
#include <iostream>

Statement::Statement(){

}

void Statement::emit(){
	std::cout << "This shouldn't print" << std::endl;
	return;
}


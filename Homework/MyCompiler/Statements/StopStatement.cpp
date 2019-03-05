#include "StopStatement.hpp"
#include <iostream>
#include <string>

StopStatement::StopStatement(){

}

void StopStatement::emit(){
	std::cout << "\tli $v0, 10\t\t#Stop Statement" << std::endl;
	std::cout << "\tsyscall" << std::endl;
}

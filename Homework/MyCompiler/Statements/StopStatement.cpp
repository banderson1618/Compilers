#include "StopStatement.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <iostream>
#include <string>

StopStatement::StopStatement(){

}

void StopStatement::emit(RegisterPool* register_pool){
	std::cout << "\tli $v0, 10\t\t#Stop Statement" << std::endl;
	std::cout << "\tsyscall" << std::endl;
}

#include "NullStatement.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <iostream>

NullStatement::NullStatement(){
}

void NullStatement::emit(RegisterPool* register_pool){
	//std::cout << "I am an null statement" << std::endl;
}

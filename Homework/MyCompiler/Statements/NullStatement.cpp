#include "NullStatement.hpp"
#include <iostream>

NullStatement::NullStatement(){
}

void NullStatement::emit(){
	std::cout << "I am an null statement" << std::endl;
}

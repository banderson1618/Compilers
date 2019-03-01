#include "Type.hpp"
#include <iostream>

PrimitiveType::PrimitiveType(){
	std::cout << "Making primitive type" << std::endl;
}

PrimitiveType* int_type = new PrimitiveType();
PrimitiveType* bool_type = new PrimitiveType();
PrimitiveType* char_type = new PrimitiveType();

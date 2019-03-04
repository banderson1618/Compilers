#include "Type.hpp"


Type::Type(){

}

int Type::size(){
	return 0;
}

PrimitiveType::PrimitiveType(){

}

int PrimitiveType::size(){
	return 4;
}


PrimitiveType* int_type;
PrimitiveType* bool_type;
PrimitiveType* char_type;

PrimitiveType* string_type;

int label_num;

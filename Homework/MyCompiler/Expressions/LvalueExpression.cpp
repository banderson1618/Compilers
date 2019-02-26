#include "LvalueExpression.hpp"

LvalueExpression::LvalueExpression(char* id){
	_id = id;
}


char* LvalueExpression::getID(){
	return _id;
}

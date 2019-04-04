#include "FunctionDeclaration.hpp"
#include "UsefulFunctions.hpp"
#include "Body.hpp"
#include "Type.hpp"

#include <iostream>
#include <vector>

FunctionDeclaration::FunctionDeclaration(std::vector<Param*>* _params, Body* _body, TypeCreator* _ret_type){
	params = _params;
	body = _body;
	ret_type = ret_type;
}

#ifndef FUNC_DECL_H
#define FUNC_DECL_H

#include "UsefulFunctions.hpp"
#include "Body.hpp"
#include "Type.hpp"

class FunctionDeclaration{
	public:
		FunctionDeclaration(std::vector<Param*>*, Body*, TypeCreator*);

	private:
		std::vector<Param*>* params;
		Body* body;
		Type* ret_type;
};


#endif

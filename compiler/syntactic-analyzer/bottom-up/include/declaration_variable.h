#ifndef _DEC_VARIABLE_
#define _DEC_VARIABLE_

#include <string>
#include <iostream>
#include "declaration.h"
#include "type.h"

class DeclarationVariable : public Declaration{

	public:
		Type type;
		std::string id;
		DeclarationVariable(Type type_, std::string id_) : type{type_}, id{id_}{}
		void toString() override{
			std::cout << "\"DeclarationVariable\": { " << std::endl;
			std::cout << "\"id\": \"" << id << "\"," << std::endl;
			type.toString();
			std::cout << std::endl << "}";
		}

};

#endif
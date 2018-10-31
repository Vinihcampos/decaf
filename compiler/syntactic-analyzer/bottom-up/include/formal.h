#ifndef _FORMAL_
#define _FORMAL_

#include <deque>
#include <iostream>
#include "declaration_variable.h"

class Formal{

	public:
		std::deque<DeclarationVariable> variables;
		void toString(){
			std::cout << "[";
			for(int i = 0; i < variables.size(); ++i){
				std::cout << "{";
 				variables[i].toString();
				std::cout << "},";
			}
			std::cout << "],";
		}

};

#endif
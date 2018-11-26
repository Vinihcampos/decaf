#ifndef _OPERATOR_PLUS_
#define _OPERATOR_PLUS_

#include <string>
#include "operator_binary.h"

class OperatorPlus : public OperatorBinary{
	public:
		OperatorPlus(Expression * expression1_, Expression * expression2_) :
			OperatorBinary(expression1_, expression2_) {}

		void toString() override{
			std::cout << "OperatorPlus: {";
			if(expression1 != nullptr){
				std::cout << "leftExpression: ";
				expression1->toString();
				std::cout << ",";
			}
			if(expression2 != nullptr){
				std::cout << "rightExpression: ";
				expression2->toString();
				std::cout << ",";
			}
			std::cout << "}";
		}
		std::string generate() override{
			std::string code = "";
			code += expression1->generate();
			code += "+";
			code += expression2->generate();

			return code;
		}
};

#endif
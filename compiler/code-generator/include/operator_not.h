#ifndef _OPERATOR_NOT_
#define _OPERATOR_NOT_

#include <string>

#include "operator_unary.h"

class OperatorNot : public OperatorUnary{
	public:
		OperatorNot(Expression * expression_) : OperatorUnary(expression_) {}
		void toString(){
			std::cout << "OperatorNot: {";
			if(expression != nullptr){
				std::cout << "expression: ";
				expression->toString();
				std::cout << ",";
			}
			std::cout << "}";
		}

		std::string generate() override{
		 	std::string code = "";
			code += "!";
			code += expression->generate();

			return code;
		}
};

#endif
#ifndef _OPERATOR_OR_
#define _OPERATOR_OR_

#include "operator_binary.h"

class OperatorOr : public OperatorBinary{
	public:
		Expression * expression1;
		Expression * expression2;

		OperatorOr(Expression * expression1_, Expression * expression2_) :
			OperatorBinary(expression1_, expression2_) {}

		void toString(){

		}
};

#endif
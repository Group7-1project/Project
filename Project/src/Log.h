/*
 * Log.h
 *
 *  Created on: Apr 9, 2014
 *      Author: Marney
 */

#include "Number.h"

class Log: public Number
{
private:
	int base, operand;

public:
	Log(int b, int x); // initialization constructor
	Log(); // default constructor

	int getBase();
	int getOperand();
	void setBase(int b);
	void setOperand(int x);

	// methods +-/* and simplify (from UML)
	Log add(Log l1, Log l2);
	Log subtract(Log l1, Log l2);
	Log multiply(Log l1, Log l2);
	Log divide(Log l1, Log l2);

	Log simplify(Log l1, Log l2);
};

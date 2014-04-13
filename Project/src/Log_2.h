/*
 * Log_2.h
 *
 *  Created on: Apr 9, 2014
 *      Author: Marney
 */
// my local file
#include "Number.h"

class Log: public Number
{
private:
	int base;
	int operand;

public:
	Log(int b, int x); // initialization constructor
	Log(); // default constructor
	int getBase();
	int getOperand();
	void setBase(int b);
	void setOperand(int x);
	void printLog(int base, int operand);

	// methods +-/* and simplify
	Log add(Log l1, Log l2);
	Log subtract(Log l1, Log l2);
	Log multiply(Log l1, Log l2);
	Log divide(Log l1, Log l2);

	void simplify(Log l1);
};

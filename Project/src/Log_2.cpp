/*
 * Log_2.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: Marney
 */

#include "Log_2.h"

Log::Log(int b, int x) { // initialization constructor
	base = b;
	operand = x;
}
Log::Log() { // default constructor
	base = 2;
	operand = 1;
}

// get/sets
int Log::getBase() {
	return base;
}
int Log::getOperand() {
	return operand;
}
void Log::setBase(int b) {
	base = b;
}
void Log::setOperand(int x) {
	operand = x;
}

void Log::printLog(int base, int operand) {
	cout << "Log_" << base << ":" << operand <<endl;
}

// +-/* operations
Log Log::add(Log l1, Log l2) {
	Log ans;
	// etc
	return ans;
}

// simplify
void Log::simplify(Log l1) {
	int x = l1.getOperand();
	int b = l1.getBase();
	int answer;
	if(b == x) {
		answer = 1;
		cout << answer <<endl;
	}
	if(x == 1) {
		answer = 0;
		cout << answer <<endl;
	}
	if(x <= 0) {
		cout << "error: cannot take log of a negative number" <<endl;
	}
	// count # of factors of the base b in the operand x
	int i = 0;
	while (x % b == 0) {
		i++;
		x /= b;
	}
	int y = x;
	cout << "base = " << b <<endl;
	cout << "count = " << i <<endl;
	cout << "y = " << y <<endl;
	cout << "Log_" << b << ":" << l1.getOperand() << " = " <<
			i << " + Log_" << b << ":" << y <<endl;

	return;
}

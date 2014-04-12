/*
 * Log.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: Marney
 */

#include <exception>
#include <string>
#include "Log.h"

/* Notes
These functions compute the natural logarithm of x. exp (log (x))
 equals x, exactly in mathematics and approximately in C.

If x is negative, log signals a domain error. If x is zero, it returns
 negative infinity; if x is too close to zero, it may signal overflow.
 */

// constructors
Log::Log(int b, int x) {
	base = b;
	operand = x;
}
Log::Log() { // default constructor
	base = 2;
	operand = 1;
}
/*
Log::Log(string s) {
	base = 2;
	operand = 1;
	strLog = s;
}
*/
// get/sets
int Log::getBase() {
	return base;
}
int Log::getOperand() {
	return operand;
}
/*string Log::getStrLog() {
	return strLog;
}*/
void Log::setBase(int b) {
	base = b;
}
void Log::setOperand(int x) {
	operand = x;
}
/*
void Log::setStrLog(string s) {
	strLog = s;
}*/

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
Log Log::simplify(Log l1) {
	Log ans; // default return
	int answer;
	int x = getOperand();
	int b = getBase();

	if(b == x) {
		answer = 1;
	}
	if(x == 1) {
		answer = 0;
	}
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


	// check if y can be written as a power of z, all integers
/*
	int z=0;
	int j=0;
	//for(z = 2; z < y/2; z++) {
		j = 0; // counter, how many factors of z are there in y?
		while(y % z == 0) {
			j++;
			y /= z;
		}
		cout << "There are " << j << " factors of " << z << " in " << y <<endl;
		//z = y;
	//}

	cout << "The answer is: " <<endl;
	cout << '\t' << i << " + " << j << "Log_" << b << ":" << z <<endl;
*/
	return ans;
}

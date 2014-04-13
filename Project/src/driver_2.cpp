/*
 * driver_2.cpp
 *
 *  Created on: Apr 1, 2014
 *      Author: Marney
 */

#include <iostream>
#include <exception>
#include <string>

// #include "Number.h"

#include "Log_2.h"

using namespace std;

int main() {
	cout << "Please enter a logarithmic expression: " <<endl;
	string strLog;
	cin >> strLog;
	cout << strLog <<endl;
	cout << "What is the base? " << endl;
	int b;
	cin >> b;
	cout << "What is the number x? " <<endl;
	int x;
	cin >> x;
	cout << "The log expression you entered is: " << "Log_" << b << ":" << x <<endl;

	Log l1(b, x);

	cout << "calling printLog" <<endl;
	l1.printLog(b, x);
	cout << "run simplify" <<endl;
	l1.simplify(l1);

	return 0;
}

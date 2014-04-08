/*
 * Fraction.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction{
public:
	//constructor
	Fraction();
	~Fraction();

	//methods
	void read(int x, int y, char c);
	int add;
	int subtract;
	int multiply;
	int divide;
	int simplify;

private:
	int numerator;
	int denominator;


};




#endif /* FRACTION_H_ */

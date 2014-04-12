/*
 * Fraction.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction:public Number{
public:
	//constructor
	Fraction(int n, int d); // default constructor
	~Fraction();

	//methods
	string add(int a, int b, int c, int d);
	string subtract(int a, int b, int c, int d);
	string multiply(int a, int b, int c, int d);
	string divide(int a, int b, int c, int d);
	string simplify(int newnNum, int newDen);

private:
	int numerator;
	int denominator;


};




#endif /* FRACTION_H_ */

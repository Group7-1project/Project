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
	int getNum();
	int getDem()
	Fraction add(Fraction F1, Fraction F2);
	Fraction subtract(Fraction F1, Fraction F2);
	Fraction multiply(Fraction F1, Fraction F2);
	Fraction divide(Fraction F1, Fraction F2);
	Fraction simplify(Fraction ans);

private:
	int numerator;
	int denominator;


};




#endif /* FRACTION_H_ */

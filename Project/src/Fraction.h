/*
 * Fraction.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction: public Number{
public:
	//constructor
	Fraction(); 					// default constructor
	Fraction(int n);				//Sets n/1
	Fraction(int n, int d);			//Sets n/d
	~Fraction();

	//methods
	void add(Fraction& F1, Fraction& F2);
	void subtract(Fraction& F1, Fraction& F2);
	void multiply(Fraction& F1, Fraction& F2);
	void divide(Fraction& F1, Fraction& F2);
	void simplify(Fraction);

private:
	int numerator;
	int denominator;



};




#endif /* FRACTION_H_ */

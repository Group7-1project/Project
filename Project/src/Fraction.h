/*
 * Fraction.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction: public Number {
public:
	//constructor
	Fraction();
	Fraction(Number f);
	Fraction(string f);
	~Fraction();




	//methods
	Number* getNumerator();
	Number* getDenominator();
	int gcd(int num, int den);
	Number* lcd(Number* frac);
	Number* add(Number* F1);
	Number* subtract(Number* F1);
	Number* multiply(Number* F1);
	Number* divide(Number* F1);
	Number* simplify();
	string toString();

private:
	Number* numerator;
	Number* denominator;



};

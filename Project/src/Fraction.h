/*
 * Fraction.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */

#ifndef FRACTION_H_
#define FRACTION_H_

#include "Number.h"

class Fraction: public Number {
public:
	//constructor
	Fraction(Number* numerator, Number* denominator);
	~Fraction();
	Number* getNumerator();
	Number* getDenominator();



	//methods
	Number* add(Number* F1);
	Number* subtract(Number* F1);
	Number* multiply(Number* F1);
	Number* divide(Number* F1);
	Number* simplify();

private:
	Number* numerator;
	Number* denominator;



};

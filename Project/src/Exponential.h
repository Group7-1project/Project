/*
 * Exponential.h
 *
 *  Created on: Apr 9, 2014
 *      Author: LukeK
 */

#ifndef EXPONENTIAL_H_
#define EXPONENTIAL_H_

#include "Number.h"
#include <cmath>

class Exponential
{
public:

	//Constructor and Destructor
	Exponential(int base, int power);
	~Exponential();

	//Methods

	Number simplify(int base, int power);
	Number simplify(int base, Fraction power2);
	Number simplify(Fraction base, Fraction power);
	Fraction evaluate(int base, int power);
	//Number evaluate2(int base, Fraction power2);
	int helpEvaluate(int base, int power);

private:

	//Fields

	int base;
	Fraction base2;
	int power;
	Fraction power2;
	Number ans;

	int s = sqrt(base);
	int c = cbrt(base);

};



#endif /* EXPONENTIAL_H_ */

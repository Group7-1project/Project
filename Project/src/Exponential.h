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
#include "Integer.h"

class Exponential
{
public:

	//Constructor and Destructor
	Exponential(int base, int power);
	Exponential(int base, Fraction power);
	~Exponential();

	//Methods

	Number simplify(int base, int power);
	Number simplify(int base, Fraction power2);
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

	int s;
	int c;

};



#endif /* EXPONENTIAL_H_ */

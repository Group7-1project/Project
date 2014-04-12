/*
 * Exponential.h
 *
 *  Created on: Apr 9, 2014
 *      Author: LukeK
 */

#ifndef EXPONENTIAL_H_
#define EXPONENTIAL_H_

#include "Number.h"

class Exponential
{
public:
	//Constructor
	Exponential(base, power);
	~Exponential();

	//Methods
	Number simplify(base, power);
	double evaluate(Number base, Number power);

private:
	//Fields
	double base;
	Number power;
	double ans;
};



#endif /* EXPONENTIAL_H_ */

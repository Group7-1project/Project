/*
 * Exponential.h
 *
 *  Created on: Apr 9, 2014
 *      Author: LukeK
 */

#ifndef EXPONENTIAL_H_
#define EXPONENTIAL_H_

class Exponential
{
public:
	//Constructor
	Exponential();
	~Exponential();

	//Methods
	int add();
	int subtract();
	int multiply();
	int divide();
	int simplify();

private:
	//Fields
	int base;
	double power;

};



#endif /* EXPONENTIAL_H_ */

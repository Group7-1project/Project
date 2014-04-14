/*
 * Irrational.h
 *
 *  Created on: Apr 7, 2014
 *      Author: Marney
 */



// This class is just for the irrational constants pi and e....and now, all irrationals xD

class Irrational
{
public:
	Irrational(int base, Fraction power);


private:
	Number pi;
	Number e;
	int base;
	Fraction power;

};



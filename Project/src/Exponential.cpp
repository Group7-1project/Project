/*
 * Exponential.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: LukeK
 */

#include "Number.h"
#include <exception>
#include "Exponential.h"

using namespace std;

Exponential::Exponential(base, power)
{

}

double Exponential::simplify(base, power)
{
	if(base == 0 && power < 0)
		return 0;

	else if(base == 0 && power >= 0)
		cout << "Not a valid operation" << endl;

	else if(base != 0 && power == 0)
		return /*integer*/(1);

	else
	{
		evaluate(base, power);

	}

}

double Exponential::evaluate(base, power)
{

}

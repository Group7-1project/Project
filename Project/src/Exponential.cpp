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


double Exponential::simplify(base, power)
{

	if(base == 0 && power < 0)
		return 0;

	else if(base == 0 && power >= 0)
		cout << "Not a valid operation" << endl;


	else if(base != 0 && power == 0)
		return 1;

	else if(base != 0 && power != 0)
	{
		evaluate(base, power);

		return ans;
	}

}

double Exponential::evaluate(base, power)
{
	if(power == 1)
		return base;

	else
		double ans = (base * evaluate(base, power-1));

}

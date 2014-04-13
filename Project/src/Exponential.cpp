/*
 * Exponential.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: LukeK
 */

#include "Number.h"
#include <exception>
#include "Exponential.h"
#include <cmath>
#include "Fraction.h"

using namespace std;

Number Exponential::simplify(int base, int power)
{

	if(base == 0 && power > 0)
	{
		return 0;
	}

	else if(base == 0 && power <= 0)
	{
		cout << "Not a valid operation." << endl; //Need to add exception handling
		return 0;
	}

	else if(base != 0 && power == 0)
	{
		return 1;
	}

	else if(base != 0 && power > 0)
	{
		evaluate(base, power);
		return ans;
	}

	else if(base != 0 && power < 0)
	{
		return (1/(evaluate(base, power)));
	}

	return 0;
}

Number Exponential::simplify(int base, Fraction power)
{
	if(base == 0 && power > 0)
		{
			return 0;
		}

	else if(base == 0 && power <= 0)
	{
		cout << "Not a valid operation." << endl; //Need to add exception handling
	}

	else if(denominator == 0)
		{
			//throw an error!
		}

	else if(base < 0 && denominator%2 == 0)
	{
		cout << "Cannot take even root of a negative number." << endl; //Need to add exception handling
	}

	else if(base >= 0 && denominator%2 == 0)
	{
		return sqrt(base);
	}

	else if(denominator%2 != 0)
	{
		return cbrt(base);
	}

	else if(power*-1 > 0)
	{
		evaluate((1/base), power*-1)
	}

	return 0;
}


//Evaluating methods

Number Exponential::evaluate(int base, int power)
{
	if(power == 1)
	{
		return base;
	}

	else
	{
		ans = (base * evaluate(base, power-1));

		return ans;
	}
}

Number Exponential::evaluate2(int base, Fraction power)
{
	if(base != 0 && denominator%2 == 0)
}

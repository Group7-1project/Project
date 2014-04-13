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

Number Exponential::simplify(int base, int power)  // All cases covered
{

	if(base == 0 && power > 0) // 0^1
	{
		return 0;
	}

	else if(base == 0 && power <= 0) // 0^-1
	{
		cout << "Not a valid operation." << endl; // Need to add exception handling
		return 0;
	}

	else if(base != 0 && power == 0) // 2^0
	{
		return 1;
	}

	else if(base != 0 && power > 0) // 2^3
	{
		evaluate(base, power);
		return ans; // here or there?
	}

	else if(base != 0 && power < 0)  // 3^-2
	{
		return (1/(evaluate(base, power))); // Return alright?
	}

	return 0;
}

Number Exponential::simplify(int base, Fraction power2)
{
	if(denominator == 0)    // 3^(1/0)
			{
				// throw an error!
			}

	else if(base == 0 && power2 > 0)   // 0^2
		{
			return 0;
		}

	else if(base == 0 && power2 <= 0)  // 0^0 or 0^(-6)
	{
		cout << "Not a valid operation." << endl; //Need to add exception handling
	}

	else if(base < 0 && denominator%2 == 0)  // -3^(1/2)
	{
		cout << "Cannot take even root of a negative number." << endl; //Need to add exception handling
	}

	else if(base >= 0 && denominator%2 == 0 && numerator >= 0) // 4^(3/2)
	{
		return evaluate(sqrt(base), numerator); //Function pointers needed?; will ints work in sqrt and cbrt function?
	}

	else if(denominator%2 != 0 && numerator >= 0) // 8^(2/3)
	{
		return evaluate(cbrt(base), numerator);
	}

	else if(power2*-1 > 0)
	{
		evaluate((1/base), (power2*-1))
	}

	return 0;
}


//Evaluating methods called by simplifying methods

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

Number Exponential::evaluate2(Fraction base2, Fraction power2)
{
	if(base2 != 0 && denominator%2 == 0)
	{

	}
}

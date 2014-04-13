/*
 * Exponential.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: LukeK
 */

#include "Number.h"
#include <stdexcept>
#include "Exponential.h"
#include <cmath>
#include "Fraction.h"

using namespace std;

Exponential::Exponential(int base, int power)
{
	int s = sqrt(base);
	int c = cbrt(base);
}

Number Exponential::simplify(int base, int power)  // All cases covered
{

	if(base == 0 && power > 0) // 0^1
	{
		return Fraction(0);
	}

	else if(base == 0 && power <= 0) // 0^-1
	{
		throw invalid_argument("Dividing by zero"); // Warn calculator coder to
													//catch exception
	}

	else if(base != 0 && power == 0) // 2^0
	{
		return Fraction(1);
	}

	else if(base != 0 && power > 0) // 2^3
	{
		return evaluate(base, power);

	}

	else if(base != 0 && power < 0)  // 3^-2
	{
		return (1/(evaluate(base, power)));
	}

	return Fraction(0);
}

Number Exponential::simplify(int base, Fraction power2) // All cases considered
{

	if(power2.denominator == 0)    // 3^(1/0)
	{
		throw invalid_argument("Invalid exponent");
	}

	else if(base == 0 && power2 > 0)   // 0^(2/1)
	{
		return Fraction(0);
	}

	else if(base == 0 && power2 <= 0)  // 0^0 or 0^(-6/1)
	{
		throw invalid_argument("Invalid entry");
	}

	else if(base !=0 && power2 == 0) // 3^(0/2)
	{
		return Fraction(1);
	}

	else if(base < 0 && power2.denominator%2 == 0)  // -3^(1/2)
	{
		throw invalid_argument("Cannot take even root of a negative number");
	}

	else if(base > 0 && power2.denominator%2 == 0 && power2 > 0) // 4^(3/2)
	{
		return evaluate(s, power2.numerator);
	}

	else if(base > 0 && power2.denominator%2 == 0 && power2 < 0) // 4^(-3/2)
	{
		return 1/(evaluate(s, power2.numerator*-1));
	}

	else if(power2.denominator%2 != 0 && power2.numerator > 0) // 8^(2/3) and -8^(2/3)
	{
		return evaluate(c, power2.numerator);
	}

	else if(power2.denominator%2 != 0 && power2.numerator < 0) // 8^(-2/3) and -8^(-2/3)
		{
			return 1/(evaluate(c, power2.numerator));
		}

	return Fraction(0);
}


//Evaluating methods called by simplifying methods

Fraction Exponential::evaluate(int base, int power)
{
	if(power == 1)
	{
		return Fraction(base);
	}

	else
	{
		int ans = (base * evaluate(base, power-1));
		return Fraction(helpEvaluate(base, power));
	}
}

/*Number Exponential::evaluate2(int base, Fraction power2)
{
	if(power2.numerator == 1)
	{
		return base;
	}
	else
	{
		Number ans2 = (base * evaluate2(base, power2.numerator-1));
		return ans2;
	}
}*/

	//Helper Methods

	int Exponential::helpEvaluate(int base, int power)
	{
		if(power == 1)
			{
				return base;
			}

			else
			{
				int ans = (base * helpEvaluate(base, power-1));
				return ans;
			}
	}

	//int Exponential::helpEvaluate2()
	//{

	//}


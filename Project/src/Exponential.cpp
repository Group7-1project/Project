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
		return (1/(evaluate(base, power))); // Return alright?
	}

	return 0;
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
		cout << "Cannot take even root of a negative number." << endl;
		return Fraction(0);
	}

	else if(base > 0 && power2.denominator%2 == 0 && power2 > 0) // 4^(3/2)
	{
		return evaluate2(sqrt(base), power2.numerator); //Function pointers needed?; will ints work in sqrt and cbrt function?
	}

	else if(base > 0 && power2.denominator%2 == 0 && power2 < 0) // 4^(-3/2)
	{
		return 1/(evaluate2(sqrt(base), power2.numerator*-1));
	}

	else if(power2.denominator%2 != 0 && power2.numerator > 0) // 8^(2/3) and -8^(2/3)
	{
		return evaluate2(cbrt(base), power2.numerator); //type check
	}

	else if(power2.denominator%2 != 0 && power2.numerator < 0) // 8^(-2/3) and -8^(-2/3)
		{
			return 1/(evaluate2(cbrt(base), power2.numerator));
		}

	return Fraction(0);
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
		Number ans = (base * evaluate(base, power-1));
		return ans;
	}
}

Number Exponential::evaluate2(int base, Fraction power2)
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

}

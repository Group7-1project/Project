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

Number Exponential::simplify(base, power)
{

//try
//{


	if(base == 0 && power > 0)
	{
		return 0;
	}

	else if(base == 0 && power <= 0)
	{
		cout << "Not a valid operation." << endl;
	}

	else if(base != 0 && power == 0)
	{
		return 1;
	}

	else if(base != 0 && power > 0)
	{
		evaluate(base, power);
	}

	else if(base != 0 && power < 0)
	{
		return (1/(evaluate(base, power)));
	}

/*	throw invalid_argument("Invalid entry");
}
catch(exception &e)
*/

}

double Exponential::evaluate(base, power)
{
	if(power == 1)
		return base;

	else
		ans = (base * evaluate(base, power-1));

	return ans;
}

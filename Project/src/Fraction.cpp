/*
 * Fraction.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */


#include "Fraction.h"
using namespace std;

Fraction separate(int a, int b, int c, int d){



}


string add(int a, int b, int c, int d){
	int num1, num2;
	int den1,den2;

	int temp1 = num1*den2;
	int temp2 = num2*den1;
	int newDen = den1*den2;
	int newNum = temp1+temp2;

	int ans = simplify(int newNum, int newDen);
	return ans
}

string subtract(int a, int b, int c, int d){
	int num1, num2;
	int den1,den2;

	int temp1 = num1*den2;
	int temp2 = num2*den1;
	int newDen = den1*den2;
	int newNum = temp1-temp2;

	int ans = simplify(int newNum, int newDen);
	return ans
}

string multiply(int a, int b, int c, int d){
	int num1, num2;
	int den1,den2;

	int newNum = num1*num2;
	int newDen = den1*den2;

	int ans = simplify(int newNum, int newDen);
	return ans
}

string divide(int a, int b, int c, int d){
}


string simplify(int newNum, int newDem){ //Binary GCD Algorithm

int numerator = x;
int denominator = y;

// simple cases (termination)
if (x == y)
    return x;

if (x == 0)
    return v;

if (y == 0)
    return u;

// look for factors of 2
if (~x & 1) // u is even
{
    if (y & 1) // v is odd
        return simplify(x >> 1, y);
    else // both u and v are even
        return simplify(x >> 1, y >> 1) << 1;
}

if (~y & 1) // u is odd, v is even
    return simplify(x, y >> 1);

// reduce larger argument
if (x > y)
    return simplify((x - y) >> 1, y);

return simplify((x - y) >> 1, y);
}

}




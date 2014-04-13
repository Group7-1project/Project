/*
 * Fraction.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */


#include "Fraction.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Fraction::Fraction(){						//default sets fraction to 0
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int n){					//sets n/1
	numerator = n;
	denominator = 1;
}

Fraction::Fraction(int n, int d){			//sets n/d
	numerator = n;
	denominator = d;

	if(d == 0){
		throw invalid_argument("0 in the denominator");
	}
}

Fraction::~Fraction(){
	delete &numerator;
	delete &denominator;
}

void Fraction::add(Fraction& F1, Fraction& F2){

	//if numbers are rational
	numerator = (F1.numerator*F2.denominator) + (F2.numerator*F1.denominator);
	denominator = (F1.denominator*F2.denominator);

	//if numbers are irrational
	//methods here

}

void Fraction::subtract(Fraction& F1, Fraction& F2){

	//if numebers are rational
	numerator = (F1.numerator*F2.denominator) - (F2.numerator*F1.denominator);
	denominator = (F1.denominator*F2.denominator);

	//if numbers are irrational
	//methods here
}

void Fraction::multiply(Fraction& F1, Fraction& F2){

	//if numbers are rational
	numerator = (F1.numerator * F2.numerator);
	denominator = (F1.denominator * F2.denominator);

	//if numbers are irrational
	//methods
}

void Fraction::divide(Fraction& F1, Fraction& F2){

	//if numbers are rational
	numerator = (F1.numerator*F2.denominator);
	denominator = (F2.numerator*F1.denominator);

	//if numbers are irrational
	//methods
}


void Fraction::simplify(Fraction){

	int a,b,r,gcd;
	a = numerator;
	b = denominator;
	if (b == 0)
	{
		cout << "Illegal fraction: division by 0";
	}
	else if (a == 0)
	{
		numerator = 0;
		denominator = 1;
		return;
	}
	while (a != 0)
		if (a < b)
		{
			r = a; a = b; b = r;
			a = a - b;
		}
	gcd = b;
	numerator = numerator / gcd;
	denominator = denominator / gcd;

}




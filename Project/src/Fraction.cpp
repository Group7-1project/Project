/*
 * Fraction.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */


#include "Fraction.h"

Fraction::Fraction(int num, int den, int op){
	numerator = num;
	denominator = den;
	operand = op;
}

int Fraction::getNum(){
	return numerator;
}

int Fraction::getDen(){
	return denominator;
}

int Fraction::getOperand() {
	return operand;
}

void Fraction::setNum(int n){
	numerator = n;
}

void Fraction::setDen(int d){
	denominator = d;
}

void Fraction::setOperand(int o){
	operand = o;
}

void Fraction::add(Fraction& F1, Fraction& F2){

	numerator = (F1.numerator*F2.denominator) + (F2.numerator*F1.denominator);
	denominator = (F1.denominator*F2.denominator);

}

void Fraction::subtract(Fraction& F1, Fraction& F2){
	numerator = (F1.numerator*F2.denominator) - (F2.numerator*F1.denominator);
	denominator = (F1.denominator*F2.denominator);
}

void Fraction::multiply(Fraction& F1, Fraction& F2){

	numerator = (F1.numerator * F2.numerator);
	denominator = (F1.denominator * F2.denominator);
}

void Fraction::divide(Fraction& F1, Fraction& F2){

	numerator = (F1.numerator*F2.denominator);
	denominator = (F2.numerator*F1.denominator);
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




/*
 * Fraction.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */


#include "Fraction.h"
#include "Integer.h"
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <cmath>
using namespace std;

Fraction::Fraction(){						//default sets fraction to 0
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(Number* numerator, Number* denominator){					//sets fraction if passed Number object

	this->numerator = numerator;

	Integer* i = dynamic_cast<Intger*>(denominator);
	try{
	if(i->getInt() == 0){
		throw invalid_argument("Zero in denominator");
	}

	else{
		this->denominator = denominator;
	}
	}
	catch(exception& e){
		cerr << "ERROR:" <<  e.what;
	}
}

Fraction::Fraction(string f){					//sets fraction if passed a string containing fraction
   int split=0;
   string n,d;
   for(int i=0;i<f.size();i++){
	if(f[i]=='/')
	   split=i;
   }
   for(int i=0;i<split;i++){
	n+=f[i];
	numerator=(int)n;
   }

   try{
   for(int i=split+1;i<f.size();i++){
	d+=f[i];
	denominator=(int)d;
   }

   if(denominator == 0 || "0"){
	   throw invalid_argument("Zero in denominator");
   }
   }

   catch(exception& e){
	   cerr << "ERROR:" <<  e.what;
   }
}

Fraction::~Fraction(){
	delete &numerator;
	delete &denominator;
}

Number* Fraction::getNumerator(){
	return this->numerator;
}

Number* Fraction::getDenominator(){
	return this->getDenominator();
}

int Fraction::gcd(int num, int den){
	if(den == 0){
		return num;
	}

	else{
		return gcd(den, (num%den));
	}
}

Number* Fraction::lcd(Fraction* frac){
	Number* den1 = frac->getDenominator();
	Number* den2 = this->getDenominator();

	Integer* i1 = dynamic_cast<Integer*>(den1);
	Integer* i2 = dynamic_cast<Integer*>(den2);

	if(i1 && i2){
		int int1 = i1->getInt();
		int int2 = i2->getInt();

		int fact = (int1*int2);
		int gcd = this->gcd(int1,int2);

		int lcm = fact/gcd;

		Integer* lcd = new Integer(lcm);

		return lcd;
	}
	else return this;
}

Number* Fraction::add(Number* F1){

	Fraction* f1 = dynamic_cast<Fraction*>(F1);
	Fraction* f2 = dynamic_cast<Fraction*>(this);

	if(f1 && f2){
		Number* n1 = f1->getNumerator();
		Number* n2 = f2->getNumerator();
		Number* d1 = f1->getDenominator();
		Number* d2 = f2->getDenominator();

		Integer* i1 = dynamic_cast<Integer*>(n1);
		Integer* i2 = dynamic_cast<Integer*>(n2);
		Integer* i3 = dynamic_cast<Integer*>(d1);
		Integer* i4 = dynamic_cast<Integer*>(d2);

		if(i1 && i2 && i3 && i4){
			Number* lcm = f2->lcd(f1);
			Integer* lcd = dynamic_cast<Integer*>(lcm);

			int t1 = i1->getInt();
			int t2 = i2->getInt();
			int t3 = i3->getInt();
			int t4 = i4->getInt();
			int lcmint = lcd->getInt();

			int fact1 = lcmint / t1;
			int fact2 = lcmint / t2;

			t1 *= fact1;
			t3 *= fact1;
			t2 *= fact2;
			t4 *= fact2;

			int sum = t3 + t4;
			Integer* newNum = new Integer(sum);
			Integer* newDen = new Integer(lcmint);

			Fraction* ans = new Fraction(newNum, newDen);

			Number* simpleAns = ans->simplify();

			return simpleAns;
		}

		else return F1;
	}

	else return F1;

}

Number* Fraction::subtract(Number* F1){

	Fraction* f1 = dynamic_cast<Fraction*>(F1);
	Fraction* f2 = dynamic_cast<Fraction*>(this);

	if(f1 && f2){
		Number* n1 = f1->getNumerator();
		Number* n2 = f2->getNumerator();
		Number* d1 = f1->getDenominator();
		Number* d2 = f2->getDenominator();

		Integer* i1 = dynamic_cast<Integer*>(n1);
		Integer* i2 = dynamic_cast<Integer*>(n2);
		Integer* i3 = dynamic_cast<Integer*>(d1);
		Integer* i4 = dynamic_cast<Integer*>(d2);

		if(i1 && i2 && i3 && i4){
			Number* lcm = f2->lcd(f1);
			Integer* lcd = dynamic_cast<Integer*>(lcm);

			int t1 = i1->getInt();
			int t2 = i2->getInt();
			int t3 = i3->getInt();
			int t4 = i4->getInt();
			int lcmint = lcd->getInt();

			int fact1 = lcmint / t1;
			int fact2 = lcmint / t2;

			t1 *= fact1;
			t3 *= fact1;
			t2 *= fact2;
			t4 *= fact2;

			int diff = t3 - t4;
			Integer* newNum = new Integer(diff);
			Integer* newDen = new Integer(lcmint);

			Fraction* ans = new Fraction(newNum, newDen);

			Number* simpleAns = ans->simplify();

			return simpleAns;
		}

		else return F1;
	}

	else return F1;

}

Number* Fraction::multiply(Number* F1){

	Fraction* f1 = dynamic_cast<Fraction*>(F1);
	Fraction* f2 = dynamic_cast<Fraction*>(this);

	if(f1 && f2){
		Number* n1 = f1->getNumerator();
		Number* n2 = f2->getNumerator();
		Number* d1 = f1->getDenominator();
		Number* d2 = f2->getDenominator();

		Integer* i1 = dynamic_cast<Integer*>(n1);
		Integer* i2 = dynamic_cast<Integer*>(n2);
		Integer* i3 = dynamic_cast<Integer*>(d1);
		Integer* i4 = dynamic_cast<Integer*>(d2);

		Number* newNum;
		Number* newDen;

		if(i3 && i4){
			int t3 = i3->getInt();
			int t4 = i4->getInt();

			newNum = new Integer(t3*t4);

		}

		else{

			newNum = n1->multiply(n2);
		}

		if(i1 && i2){
			int t1 = i1->getInt();
			int t2 = i2->getInt();

			newDen = new Integer(t1*t2);
		}

		else{
			newDen = d1->multiply(d2);
		}

		Fraction* Ans = new Fraction(newNum, newDen);

		Number* simpleans = Ans->simplify();

		return simpleans;
}
	else return F1;
}

Number* Fraction::divide(Number* F1){

	Fraction* f1 = dynamic_cast<Fraction*>(F1);
	Fraction* f2 = dynamic_cast<Fraction*>(this);

	if(f1 && f2){
		Number* n1 = f1->getNumerator();
		Number* n2 = f2->getNumerator();
		Number* d1 = f1->getDenominator();
		Number* d2 = f2->getDenominator();

		Integer* i1 = dynamic_cast<Integer*>(n1);
		Integer* i2 = dynamic_cast<Integer*>(n2);
		Integer* i3 = dynamic_cast<Integer*>(d1);
		Integer* i4 = dynamic_cast<Integer*>(d2);

		Number* newNum;
		Number* newDen;

		if(i3 && i2){
			int t3 = i3->getInt();
			int t4 = i2->getInt();
		}

		else{
			newNum = n1->multiply(d2);
		}

		if(i1 && i4){
			int t1 = i1->getInt();
			int t2 = i4->getInt();

			newDen = new Integer(t1*t2);
		}

		else{
			newNum = d1->multiply(n2);
		}

		Fraction ans = new Fraction(newNum, newDen);

		Number* simpleans = ans->simplify();

		return simpleans;
}


Number* Fraction::simplify()
{
        for (int i = denominator * numerator; i > 1; i--) {
                if ((denominator % i == 0) && (numerator % i == 0)) {
            denominator /= i;
                numerator /= i;
        }

         }
}

string Fraction::toString(){

	ostringstream fraction;

	Fraction* f = dynamic_cast<Fraction*> (this);

	if(f){
		Number* n = f->getNumerator();
		Number* d = f->getDenominator();

		Integer* num = dynamic_cast<Integer*>(n);
		Integer* den = dynamic_cast<Integer*>(d);

		int numerator = num->getInt();
		int denominator = num->getInt();

		fraction << " ( " << numerator << " / " << denominator << " ) ";

		return fraction.str();
	}
}


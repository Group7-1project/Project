/*
 * Fraction.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction: public Number{
public:
	//constructor
	Fraction(int num, int den, int op); // default constructor
	~Fraction();

	//methods
	int getNum();
	int getDen();
	int getOperand();
	void setNum(int n);
	void setDen(int d);
	void setOperand(int o);

	void add(Fraction& F1, Fraction& F2);
	void subtract(Fraction& F1, Fraction& F2);
	void multiply(Fraction& F1, Fraction& F2);
	void divide(Fraction& F1, Fraction& F2);
	void simplify(Fraction);

private:
	int numerator;
	int denominator;
	int operand;


};




#endif /* FRACTION_H_ */

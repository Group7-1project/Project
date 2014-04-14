/*
 * Integer.h
 *
 *  Created on: Apr 13, 2014
 *      Author: Daniel
 */

#ifndef INTEGER_H_
#define INTEGER_H_

class Integer: public Number {
public:

	//Constructor
	Integer(Number* n);

	//Methods
	Number* getInt();
	Number* add(Number* n);
	Number* subtract(Number* n);
	Number* multiply(Number* n);
	Number* divide(Number* n);

private:
	Number* integer;
};



#endif /* INTEGER_H_ */

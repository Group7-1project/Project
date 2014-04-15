/*
 * Number.h

 *
 *  Created on: Apr 7, 2014
 *      Author: Marney
 */

#include <iostream>
#include <cmath>


using namespace std;

// our Number superclass
class Number{

public:
	Number(Calculator* value);
	virtual ~Number();

	Calculator* getNumber();
	Calculator* add(Number* n);
	Calculator* subtract(Number* n);
	Calculator* multiply(Number* n);
	Calculator* divide(Number* n);

private:
	Calculator* value;



};

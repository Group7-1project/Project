/*
 * Integer.cpp
 *
 *  Created on: Apr 13, 2014
 *      Author: Daniel
 */



#include "Integer.h"

Integer::Integer(Number* n){
	this->n = integer;
}

Number* Integer::getInt(){
	return this->integer;
}

Number* Integer::add(Number* n){
	Integer* i1 = dynamic_cast<Integer*>(n);
	Integer* i2 = dynamic_cast<Integer*>(this);

	return i1+i2;
}

Number* Integer::subtract(Number* n){
	Integer* i1 = dynamic_cast<Integer*>(n);
	Integer* i2 = dynamic_cast<Integer*>(this);

	return i1-i2;
}

Number* Integer::multiply(Number* n){
	Integer* i1 = dynamic_cast<Integer*>(n);
	Integer* i2 = dynamic_cast<Integer*>(this);

	return i1*i2;
}

Number* Integer::divide(Number* n){
	Integer* i1 = dynamic_cast<Integer*>(n);
	Integer* i2 = dynamic_cast<Integer*>(this);

	return i1/i2;
}

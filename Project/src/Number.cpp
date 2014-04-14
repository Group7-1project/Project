/*
 * Number.cpp
 *
 *  Created on: Apr 14, 2014
 *      Author: Daniel
 */



#include "Number.h"

Number::Number(Calculator* value){
	this->value = value;
}

virtual Number::~Number(){

}

Calculator* Number::getNumber(){
	return this->value;
}

Calculator* Number::add(Number* n){
	Number* n1 = dynamic_cast<Number*>(n);
	Number* n2 = dynamic_cast<Number*>(this);

	return n1 + n2;
}

Calculator* Number::subtract(Number* n){
	Integer* n1 = dynamic_cast<Number*>(n);
	Integer* n2 = dynamic_cast<Number*>(this);

	return n1-n2;
}

Calculator* Number::multiply(Number* n){
	Integer* n1 = dynamic_cast<Number*>(n);
	Integer* n2 = dynamic_cast<Number*>(this);

	return n1*n2;
}

Calculator* Number::divide(Number* n){
	Integer* n1 = dynamic_cast<Number*>(n);
	Integer* n2 = dynamic_cast<Number*>(this);

	return n1/n2;
}

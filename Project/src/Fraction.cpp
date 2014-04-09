/*
 * Faction.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */

#include <exception>
#include "Fraction.h"
using namespace std;

void read(int x, int y, char c){

try{

	if(c == "+"){

	}

	else if(c == "-"){
		//methods
	}

	else if(c == "x"){

	}

	else if(c == "/"){

	}
	else throw invalid_argument("incorrect user input");
}

catch(exception& e){
	cout<<e.what()<<endl;
}





}




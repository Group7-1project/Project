/*
 * Fraction.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Daniel
 */


#include "Fraction.h"
using namespace std;

Fraction separate(Fraction F1, Fraction F2){



}


Fraction add(Fraction F1, Fraction F2){


}

Fraction subtract(Fraction F1, Fraction F2){
}

Fraction multiply(Fraction F1, Fraction F2){
}

Fraction divide(Fraction F1, Fraction F2){
}


Fraction simplify(Fraction ans){ //Binary GCD Algorithm

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




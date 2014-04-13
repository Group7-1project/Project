
#ifndef CALULATOR_H
#define	CALULATOR_H
#include <iostream>

using namespace std;

class Calculator{
    bool isDigit(char c);
    int precedence(char c);
    void parenthesisError();
    string parse(string equation);
    string removeSpace(string equation);
    equateRPN(string RPNeq);
    void DisplayMenu();
};

#endif	/* CALULATOR_H */



#ifndef CALCULATOR_H
#define CALCULATOR_H

using namespace std;

class Calculator{
    bool isDigit(char c);
    int precedence(char c);
    void parenthesisError();
    string parse(string equation);
    string removeSpace(string equation);
    //equateRPN(string RPNeq);
    void DisplayMenu();
};

#endif	/* CALCULATOR_H */



#include "Calulator.h"

void Calculator::DisplayMenu(){
    //This will display the menu of the calculator.
    cout << "Welcome to the calculator! To begin calculating, simply enter an equation.\n";
    cout << "To retrieve last answer, type ans. Logs will be input as log_base(number)\n";
    cout << "Radicals can be input as rad_index(number)";
}

bool Calculator::isDigit(char c){
    if(c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9' || c=='0')
        return true;
    else
        return false;
}
int Calculator::precedence(char c){
    if(c=='+' || c=='-')
        return 2;
    else if(c=='*' || c=='/')
        return 3;
    else if(c=='^')
        return 4;
    else
        return 0;
}

void Calculator::parenthesisError(){
    cout << "Error: unmatched parenthesis\n";
}

string Calculator::parse(string equation){
    string outputRPN[20];
    string op[20];
    int opCount=0;
    int outputCount=0;
    bool match=true;
    for(int i=0;i<equation.size();i++){
        if(isDigit(equation[i])==false && equation[i]!=')'){
            if(equation[i]=='(')
                match=false;
            if(precedence(equation[i]) < precedence(op[opCount])){
                outputRPN[outputCount]=op[opCount];
                outputCount++;
                op[opCount]==equation[i];
            }
            op[opCount]=equation[i];
            opCount++;
            outputCount++;
        }
        if(equation[i]==')'){
            match=true;
            int j=0;
            while(equation[j]!='('){
                outputRPN[outputCount]=op[opCount];
                opCount--;
                outputCount++;
                j--;
                if(j==-1){
                    parenthesisError();
                }
            }
        }
        else if(isDigit(equation[i]))
                outputRPN[outputCount]+=equation[i];
        if(match)
            return outputRPN;
        else
            parenthesisError();
    }
}
string Calculator::removeSpace(string equation){
    int count=0;
    string ret;
    for(int i=0;i<equation.size();i++){
        if(equation[i]==' ')
        i++;
        ret+=equation[i];
    }
    return ret;
}

equateRPN(string RPNeq){
    
}

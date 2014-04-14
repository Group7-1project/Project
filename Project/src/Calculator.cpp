
#include "Number.h"

void Calculator::DisplayMenu(){
    //This will display the menu of the calculator.
    cout << "Welcome to the flopless calculator! To begin calculating, simply enter an equation.\n";
    cout << "To retrieve last answer, type ans.\n";
    cout << "Radicals can be input as rad_index(number)\n";
}
//void Calculator::calculate(){
//    string ip;
//    while(ip!='q' || ip!='Q'){
//       cin >> ip;
//        parse(removeSpace(ip));
//    }
//}

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
    char outputRPN[30];
    char op[20];
    int opCount=0;
    int outputCount=0;
    bool match=true;
    for(int i=0;i<equation.size();i++){
        if(equation[i]=='+'||equation[i]=='-'||equation[i]=='*'||equation[i]=='/'||equation[i]=='('){
            if(equation[i]=='(')
                match=false;
            if(precedence(equation[i]) < precedence(op[opCount-1])){
                outputCount++;
                opCount--;
                outputRPN[outputCount]=op[opCount];
                op[opCount]==equation[i];
            }
            op[opCount]=equation[i];
            opCount++;
            outputCount++;
        }
        else if(equation[i]==')'){
            match=true;
            int j=0;
            while(equation[j]!='('){
                outputRPN[outputCount]=op[opCount];
                opCount--;
                j--;
                if(j==-1)
                    parenthesisError();
            }
        }
        else if(equation[i]=='e'){
            outputRPN[outputCount]=equation[i];
            outputCount++;
        }
        else if(equation[i]=='p' && equation[i+1]=='i'){
            outputRPN[outputCount]='p';
            outputCount++;
        }
        else if(isDigit(equation[i]))
                outputRPN[outputCount]+=equation[i];
    }
    for(int i=opCount;i<=0;i--){
        outputCount++;
        outputRPN[outputCount]=op[opCount];
    }
    if(match)
        return outputRPN;
    else
        parenthesisError();
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

/*string Calculator::output(string RPNeq[]){
    for(int i=0;i<RPNeq.size();i++){
        if(RPNeq[i]=='+'){
            int a=0;
            a=(int)RPNeq[i-2]+(int)RPNeq[i-1];
        }
    }
}*/

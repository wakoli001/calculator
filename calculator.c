#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main(){
    int num1, num2, Result;
    char op;
    //prompt the usr to enter the first number
    cout << "Enter the first number :";
    cin >> num1;
    //prompt  the user to enter the operator needed
    cout << "Enter the Operator :";
    cin >> op;
    //prompt the user to enter the second number
    cout << "Rnter the second number :";
    cin >> num2;
    //you can now switch between the operators
    switch(op){
    case '+':
        Result = num1 + num2;
        break;
    case '-':
        Result = num1 - num2;
        break;
    case '*':
        Result =num1 * num2;
        break;
    case '/':
        Result =num1 / num2;
        break;
    case '%':
        Result =num1 % num2;
        break;
         default :
            cout << "Invalid operator";
            break;
    }
    cout << "Result = "<< Result;

    return 0;
}

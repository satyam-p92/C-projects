#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout<< "Enter the value of first number: ";
    cin>> num1;
    cout<< "Enter operator: ";
    cin>> op;
    cout<< "Enter the value of second number: ";
    cin>> num2;

    int result;
    if( op == '+' ) {
        result = num1 + num2;
    }
    else if( op == '-' ) {
        result = num1 - num2;
    }
    else if( op == '*' ) {
        result = num1 * num2;
    }
    else if( op == '/' ) {
        result = num1 / num2;
    }
    else if( op == '%' ) {
        result = num1 % num2;
    } 
    else {
        cout<< "enter the valid operator." <<endl;
    }

    cout<< result;

    return 0;
}
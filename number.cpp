#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    /*cout<< 100+100 <<endl;

//finding for remainder.
    cout<< 10 % 3 <<endl;


// increment and decrement methood.
    int num = 100;
    num++;
    num--;

    // divide equal to op[erator in use.
    num /= 2;
    cout<< num <<endl;


// using of math function to include the methods.

// power of the numbers above.
    cout<< pow( 2,5 ) <<endl; 

//for find out square root.
    cout<< sqrt( 100 ) <<endl;

//find out round number of given data.
    cout<< round( 9.9 ) <<endl;

//find max or min number.
    cout<< fmax( 100, 200 ) <<endl;
    cout<< fmin( 100, 200 ) <<endl; */

    int a = 10, b = 15, c = 20, d = 18, e = 40, f = 2, result;
    result = a + b - c / d * e % f;
    cout<< result <<endl;

    return 0;
}
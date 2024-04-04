#include <iostream>
using namespace std;

int main()
{

    int index = 100;

    /*after using while loop alwys make sure 
    to stop this loop happening by using incremented 
    or decremented sign of that value to end in there.*/ 

    //while (index <= 10)
    // do while loop is used for first solution then checking.
    do{ 
        cout << index << endl;
        index++;
    } while( index <= 5);

    return 0;
}
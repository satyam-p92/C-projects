#include<iostream>

using namespace std;


void sum( string name, char b) {
    
    int i = 10, j = 10;
    int sum = i+j;
    cout << "heloo " << name << " how r you " << b << endl;
    cout << sum << endl;
}

int main()
{
    cout<< "hey there!" <<endl;
    //sum('L');
    sum("savnam" , 'k');
    sum("lauran" , 'm');
    cout<< "how r u?" << endl;

    return 0;
}
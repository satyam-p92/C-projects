#include<iostream>
using namespace std;


int power() {
    int basenum, powernum;
    int result =1;
    cout <<"enter the base number: ";
    cin>> basenum;
    cout <<"enter the power number: ";
    cin>> powernum;

    for (int i = 0; i < powernum; i++)
    {
        result = result * basenum;
    }
    return result;
    

}
int main() {

    cout << power();

    return 0;
}
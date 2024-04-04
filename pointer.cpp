#include<iostream>
using namespace std;

int main() {

    int age = 19;

    int *pAge = &age;
   // string name = "lauren";
   // char character = 'c';
   // double gpa = 92.896;

   // cout << "enter the age: ";
    //cin>> age;

    cout << pAge <<endl;
    
    cout << *pAge <<endl;
   // cout << &name <<endl;
   // cout << &gpa <<endl;
    return 0;
}
#include<iostream>

using namespace std;

int main()
{
	/*int age;
	cout<< "enter your age :";
	cin>> age;
	cout<< "your'e age is:" << age<< "years old";*/


//getting charcter all line
	string name;
	cout<< "enter your name:";
	getline( cin, name);
	cout<< "your name is " << name;
	return 0;
}
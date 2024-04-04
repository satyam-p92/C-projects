#include<iostream>
using namespace std;

int main()
{
    string color, pluralNoun, name;

    cout<< "Enter a color: " << color;
    getline( cin, color);
    cout<< "Enter a plural noun: " << pluralNoun;
    getline( cin, pluralNoun);
    cout<< "Enter a name: "<< name;
    getline( cin, name);

    cout<< "Roses are "<< color << endl;
    cout<< pluralNoun <<" are blue" << endl;
    cout<< "I hate "<< name << endl;

    return 0;
}
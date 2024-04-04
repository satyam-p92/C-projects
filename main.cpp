#include <iostream>

using namespace std;

int main()
{
    string charactername = "lauren";
    int characterage;
    characterage = 90;
    char character = 'c';

    // for using the length of the character.
    cout << "there is a man name " << charactername.length() << endl;

    // for using to find out array of one character in the full of string.
    charactername[5] ='m';
    cout << "there is a man name " << charactername[5] << endl;


    //find out the finding of the charcater location is it available or not.
    string phrase = "giraffe academy";
    cout<< phrase.find( "ffe", 0) <<endl;

    //find out the substring chacater.
    cout<< phrase.substr( 4, 6) <<endl;

    cout << "his age is " << characterage << " years old." << endl;
    cout << "there ia name who start with " << character << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main() {

    int secretNum = 7;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses)
    {   
        if (guesscount < guesslimit)
        {
            cout <<"Enter guess: ";
            cin >> guess;
            guesscount++;
        }
        else
        {
            outOfGuesses = true;
        }
        
        
    }
    if (outOfGuesses)
    {
        cout<< "you loss!";
    }
    else
    {
        cout<< "you win!";
    }
    
    

    return 0;
}
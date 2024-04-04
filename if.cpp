#include<iostream>

using namespace std;


int getMax() {

    int num1, num2, num3;

    cout<< "enter the value of num1: " <<endl;
    cin>> num1;
    cout<< "enter the value of num2: " <<endl;
    cin>> num2;
    cout<< "enter the value of num3: " <<endl;
    cin>> num3;

    int result;

    if( num1 >= num2 && num1 >= num3 ) {
        result = num1;
        cout << "num 1 value is bigger than num2" <<endl;
    }
    else{
        result = num2;
        cout << "num 1 is not bigger than num2" <<endl;
    }

    return result;
}

int main(){
    
    bool isMale = false;
    bool isTall = true;

//in &&(and operator) if one is false then all is false and in ||(or operator) if one is true then all is true

    if (isMale && isTall)
    {
        cout<< "you are male and tall too." <<endl;
    }
    else if(isMale && !isTall){
        cout<< "you are male and not tall." <<endl;
    }
    else if(!isMale && isTall){
        cout<< "you are not male but you are tall." <<endl;
    }
    else{
        cout<< "you are gay and not tall." <<endl;
    }
    

    cout<< getMax();


    return 0;
}
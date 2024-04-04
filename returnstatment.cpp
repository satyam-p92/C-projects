#include<iostream>
using namespace std;

double quad(double num){
    double result = num * num * num * num;
    return result;
}

int main(){

    double ans = quad(10.0);
    cout<< ans;
    return 0;
}
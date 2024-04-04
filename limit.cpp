#include<iostream>
#include<limits>

using namespace std;

int main(){

    cout<<"The range of short is" <<numeric_limits<short>::min()<< " to "
    <<numeric_limits<short>::max() <<endl;

    return 0;
}
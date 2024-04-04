#include<iostream>
using namespace std;


string getDayOfWeek() {
    int dayNum;
    string dayName;

    cout<< "enter the dayNum value: ";
    cin>> dayNum;
    
    switch(dayNum) {
        case 0:
            dayName = "Sunday";
        break;
        case 1:
            dayName = "Monday";
        break;
        case 2:
            dayName = "Tuesday";
        break;
        case 3:
            dayName = "Wednesday";
        break;
        case 4:
            dayName = "Thursday";
        break;
        case 5:
            dayName = "Friday";
        break;
        case 6:
            dayName = "Saturday";
        break;
        default:
        cout<< "Invalid data" <<endl;
        
    }

    return dayName;
}

int main(){

    cout<< getDayOfWeek();

    return 0;
}
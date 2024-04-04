#include<iostream>
using namespace std;


class Chef{
    public:
        void makechicken(){
            cout<< "the chef makes chicken." <<endl;
        }
        void makesalad(){
            cout<< "the chef makes salad." <<endl;
        }
        void makechappati(){
            cout<< "the chef makes chappati." <<endl;
        }

};
class Italianchef : public Chef{

};

int main() {

    Chef chef;
    chef.makesalad();

    Italianchef italianchef;
    italianchef.makechappati();
    return 0;
}
#include<iostream>
using namespace std;

class Hero {
    public:
        int health;
};
//end with semi-colon

class Car{
    //empty class
};

int main(){
    //creation of object
    // memory is allocated as soon as class is created
    Hero h1;
    cout << "size: " << sizeof(h1) << endl;
    cout << "Hero Health: "<< h1.health <<endl;
    //because int is 4 bytes (32 bits)
    // even when int value is garbage

    Car Maruti;
    cout << "car size: " << sizeof(Maruti);
    // empty class gets 1 byte for identification
}
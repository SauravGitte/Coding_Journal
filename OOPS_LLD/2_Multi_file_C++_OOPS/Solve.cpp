// Here we can keep the classes and thier code in different file. 
// and Include them in Main code , if in same directory
#include<iostream>
#include "Hero.cpp" // cpp file already includes Hero.h
using namespace std;

int main(){
    Hero h1;
    h1.name = "Iron Man";
    h1.Health = 100;
    h1.level = 'A';
    h1.printInfo();
}
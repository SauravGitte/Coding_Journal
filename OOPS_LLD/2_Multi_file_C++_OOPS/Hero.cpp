#include <iostream>
#include "Hero.h"
using namespace std;

void Hero::printInfo() {
    cout << "Name: " << name << ", Health: " << Health << ", Level: " << level << endl;
}
// Hero:: tells that function belongs to the Hero class
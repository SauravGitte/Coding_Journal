#ifndef HERO_H
#define HERO_H

#include <string>
using namespace std;

class Hero {
public:
    string name;
    int Health;
    char level;

    void printInfo();
};

#endif

#include<bits/stdc++.h>
using namespace std;

class Hero {
    private:
    int health;
    int balance;

    public:
    char level;

    void printinfo(){
        cout <<"Level: "<< level <<" Health: "<<health << endl;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    int getBalance(int password){
        if(password == 2025){
            return balance;
        }
        else{
            cout<<"Wrong password."<<endl;
            return -1;
        }
    }

    void setBalance(int k, int password){
        if(password == 2025){
            balance  = k;
        }
        else{
            cout << "Wrong password. Try Again"<<endl;
        }
    }


};

int main(){
    Hero Archer;
    Archer.setHealth(70);
    Archer.level = 'A';

    Archer.printinfo();
    cout<< "Archer health is: "<< Archer.getHealth()<<endl;

    // Use: Enhanced security
    Archer.setBalance(10000,2026);
    cout<<"Balance is: "<< Archer.getBalance(2026);
}

// Getter is for reading/ Fetching
// Setter is for writing
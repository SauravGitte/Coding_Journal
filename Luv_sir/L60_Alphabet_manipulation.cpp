#include<bits/stdc++.h>
using namespace std;

void printBinary( int num){
    for(int i=10 ; i >=0 ; i--){
        cout<< ((num >> i) & 1);
    }
    cout<<endl;
}

int main(){
    //upper case / lower case 
    cout<<"UPPERCASE Binary:"<<endl;
    for(char c = 'A' ; c <='D'; c++){
        cout << c << endl;
        printBinary(int(c));
    }
    cout<<endl;
    
    cout<<"lowercase Binary"<<endl;
    for(char c = 'a' ; c <='d'; c++){
        cout << c << endl;
        printBinary(int(c));
    }
    cout<<endl;   

    // changing Uppercase to lowercase -> set 5th bit
    char A = 'A';
    char a = A | ( 1 << 5);
    cout << a << endl;

    // changing lowercase to uppercase -> Unset 5th bit
    char b = 'b';
    char B = b & (~(1<<5)) ;
    cout << B <<endl;

    // printing space
    // space is 32 in ASCII
    cout <<"space is "<<  char(1<<5) <<endl;

    // hence OR of upper with space -> lowercase
    cout<<char('A' | ' ')<<endl;

    // printing underscore 1011111. (95)
    // convert lowercase to UPPERCASE
    cout<< char('a' & '_')<<endl;

    
}
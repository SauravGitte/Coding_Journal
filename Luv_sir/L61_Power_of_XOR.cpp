#include<bits/stdc++.h>
using namespace std;

// XOR is inequality operator
// 1 0 --> 1
// 0 1 --> 1 
// 1 1 --> 0
// 0 0 --> 0

int main(){
    cout<< (5^5) << endl;
    // 1 0 1
    // 1 0 1
    //- - - - 
    // 0 0 0 
    cout<< (5^0) << endl;
    // 1 0 1
    // 0 0 0 
    // - - - 
    // 1 0 1

    //swapping numbers
    int a = 4, b = 6;
    cout<< a<<" "<< b<<endl;
    a = a ^ b;
    b = b ^ a ;
    // XOR is associative
    // means b = b ^ (a ^ b) = (b^b)^a = 0^a = a ; 
    a = a ^ b;
    //means a = (new a)^(new b);
    //means a = (a ^ old b)^(new b);
    //means a = (a ^ b) ^ a = a;
    cout<< a <<" "<< b <<endl; 
}
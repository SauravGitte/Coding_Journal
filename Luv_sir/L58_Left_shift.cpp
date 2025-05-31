#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<< INT_MAX << endl ;
    // int a = (1 << 32 ) -1 ; // 1 << 32 cannot be calculated in int . 
    int a = (1LL << 32 ) -1 ; //correct
    cout<< a << endl;
    unsigned int b = (1LL << 32 ) -1 ;
    cout<< b << endl;

}
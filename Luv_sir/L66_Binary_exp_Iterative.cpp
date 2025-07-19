#include<bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

// Here we are assuming :  a,b  < (10^9) ; 
//What will happen if a,b < 1e18 


int binExpIter(int a , int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
}

int main(){
    int a = 3 , b = 13;
    cout << binExpIter(a,b)<<endl;
}
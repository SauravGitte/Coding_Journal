#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    // a> b 
    cout << gcd(12,4)<<endl;
    cout << gcd(18,12)<<endl;
    // inbuilt function
    cout << __gcd(12,4);
}
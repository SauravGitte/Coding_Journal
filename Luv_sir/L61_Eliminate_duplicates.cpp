#include<bits/stdc++.h>
using namespace std;

/*
Given an array a of n integers.
All integers are present in even count except one.
Find that one integer which has odd count in O(N) time complexity
and O(1) space complexity.

N < 10^5
a[i] < 10^5 
*/


/*
input
9
2 4 6 7 7 4 2 2 2 
*/ 
int main(){
    // take XOR of all numbers .
    // even count will cancel due to XOR .
    // only the odd will survive
    // a ^ b ^ c ^ a ^ a ^a ^b = c
    int n;
    cin>>n;
    int x;
    int ans = 0;
    for(int i=0 ;i<n;i++){
        cin>> x ;
        ans ^= x;
    }
    cout<< ans << endl;
}

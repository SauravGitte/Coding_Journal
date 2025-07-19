#include<bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int binExpRecur(int a , int b){
    if(b ==0 ) return 1;
    long res = binExpRecur(a, b/2);
    // &1 check if odd
    if(b&1){
        return a * res * res;
    }else{
        return res * res;
    }
}

int main(){
    int a = 2, b = 13;
    // in O(N) time
    int ans = 1;
    for(int i=0 ; i<b ; i++){
        ans*= a;
        ans%= M;
    } 
    cout<<"In O(N) time"<<endl;
    cout <<ans<<endl;

    // Now in Log(N) time
    cout<<"Using Binary Exp"<<endl;
    cout<<binExpRecur(a,b)<<endl;

    // callin in built function
    cout<< "using builtin fucntion"<<endl;
    cout<< pow(2 ,13);

}
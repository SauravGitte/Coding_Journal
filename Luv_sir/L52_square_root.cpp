#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6;
//precision till 6 decimal places

int main(){
    double x;
    cin>>x;
    double lo = 1, hi = x,mid;
    while(hi- lo >eps){
        mid = (hi+lo) /2 ;
        if(mid*mid < x){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    //print any 
    cout << fixed << setprecision(4);
    cout<< lo <<endl<< hi <<endl;
    cout<<"Real: "<<pow(x ,1.0/2)<<endl;
}
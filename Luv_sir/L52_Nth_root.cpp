#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6;
//precision till 6 decimal places

double multiply(double mid , int n){
    double ans = 1;
    for(int i=0; i<n;i++){
        ans = ans*mid;
    }
    return ans;
}


int main(){
    double x;
    cin>>x;
    int n;
    cin>>n;
    double lo = 1, hi = x,mid;
    while(hi- lo >eps){
        mid = (hi+lo) /2 ;
        if(multiply(mid,n) < x){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    //print any 
    cout << fixed << setprecision(4);
    cout<< lo <<endl<< hi <<endl;
    cout<<"Real: "<<pow(x ,1.0/n)<<endl;
}
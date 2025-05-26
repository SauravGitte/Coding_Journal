#include<bits/stdc++.h>
using namespace std;

// We will use a new approach . 
// Instead of classic low<high approach 
// We will use (high - low ) > 1 
// When they will not cross each other& this also covers all conditions

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    int lo = 0 ;
    int hi = n-1;
    while(hi - lo > 1){
        int mid = (hi+lo) /2 ;
        if(v[mid]<target){
            // right search space
            lo= mid;
        }
        else{
            //left search space
            hi = mid;
        }
    }
    //now lo and hi are adjacent 
    if(v[lo] == target){
        cout<<"Postion:"<<lo;
    }
    else if (v[hi]== target){
        cout<<"Position"<<hi;
    }
    else{
        cout<<"Element not found!"<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int upper_bound( vector<int> &v, int element){
    int hi = v.size() - 1;
    int lo = 0 ; 
    while(hi - lo > 1 ){
        int mid = (hi + lo) /2 ;
        if(v[mid]<= element){
            //eliminate the equals also from search space
            lo = mid + 1 ; 
        }
        else{
            hi = mid ;
        }
    }
    if( v[lo] > element ){
        return lo;
    }
    else if( v[hi] > element ){
        return hi;
    }
    else{
        return -1;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    // give sorted vector as input
    for(int i=0 ; i <n ; i++){
        cin>>v[i];
    }
    int value;
    cin>>value;
    int ub = upper_bound(v,value);
    if(ub == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Index:"<<ub<<" "<<v[ub]<<endl;
    }
    
}
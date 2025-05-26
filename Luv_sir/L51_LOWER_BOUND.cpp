#include<bits/stdc++.h>
using namespace std;

// All edge cases covered
// if larger than all array numbers ,prints -1 
// if smaller than all array , prints index 0 .(first large number)


int lower_bound( vector<int> &v, int element){
    int hi = v.size() - 1;
    int lo = 0 ; 
    while(hi - lo > 1 ){
        int mid = (hi + lo) /2 ;
        if(v[mid]<element){
            // leave mid , it cannot be lower bound
            lo = mid + 1 ; 
        }
        else{
            hi = mid ;
        }
    }
    if( v[lo] >= element ){
        return lo;
    }
    else if( v[hi] >= element ){
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
    int lb = lower_bound(v,value);
    if(lb == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Index:"<<lb<<" "<<v[lb]<<endl;
    }
    
}
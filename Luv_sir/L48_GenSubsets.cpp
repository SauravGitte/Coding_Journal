#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void generate(vector<int> &subset , int i , vector<int>&nums){
    //base case
    if( i == nums.size()){
        ans.push_back(subset);
        return;
    }

    // ith element not in subset
    generate(subset, i+1 , nums);

    //ith element considered
    subset.push_back(nums[i]);
    generate(subset , i+1 , nums);
    subset.pop_back();
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0 ; i<n ; i++){
        cin>> nums[i];
    }
    vector<int> subset;
    generate(subset,0,nums);
    for(auto it : ans){
        for(auto ele :it){
            cout<< ele << " ";
        }
        cout<<endl;
    }
}
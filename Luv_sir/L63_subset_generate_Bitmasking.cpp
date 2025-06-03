#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    int subset_ct = 1<<n ;
    // Integer representation of bit masks will be from 0 to (2^n)-1
    // means 0 to subset_count -1 ;
    vector<vector<int>> ans;
    for( int mask = 0 ; mask < subset_ct ; mask++ ){
        // convert this integer into binary
        // map corresponding elements
        // n bits for n length array
        vector<int> v;
        for(int i=0 ; i<n ; i++){
            if(mask & (1 << i)){
                v.push_back(nums[i]);
            }
        }
        ans.push_back(v);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    // 2^n subsets will be generated
    vector<vector<int>> ans;
    ans = subsets(v);
    // print answer
    for( auto it : ans ){
        for( auto ele : it ){
            cout<< ele << " ";
        }
        cout<<endl;
    }
    // Time complexity : O( ( 2^n )* n )

}
#include<bits/stdc++.h>
using namespace std;

//  Given the dimension of a sequence of matrices in an array arr[],
//  where the dimension of the ith matrix is (arr[i-1] * arr[i]),
//  the task is to find the most efficient way to multiply these matrices together
//  such that the total number of element multiplications is minimum. 

// Input: arr[] = [2, 1, 3, 4]
// Output: 20

int solve(vector<int> &arr, int i , int j){
    if( i>=j ){
        // single element or no element 
        // no multiplication possible
        return 0;
    }

    int mn = INT_MAX;//minimum cost
    for(int k = i ; k<=j-1;k++){
        int temp_ans = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
        if(temp_ans < mn){
            mn = temp_ans;
        }
    }
    return mn;
}

int main(){
    vector<int> arr = {2, 1, 3, 4};
    int n = arr.size();
    int i = 1;
    int j = n-1;
    cout << solve(arr,i,j);
    return 0;
}
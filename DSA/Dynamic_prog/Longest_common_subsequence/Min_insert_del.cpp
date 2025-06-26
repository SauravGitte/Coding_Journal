// Minimum number of insertions and deletion to convert string a --> b
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    int m = a.length();
    int n = b.length();
    // find LCS length
    //initialisation
    vector<vector<int>> dp(m+1, vector<int> (n+1 , -1 ));
    for(int i=0 ; i<=m ; i++){
        for(int j=0 ; j<=n ; j++){
            if(i==0 || j==0) {
                dp[i][j] = 0;
            }
            else if(a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1; 
            }
            else{
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }


    int l = dp[m][n];
    int del = m-l;
    int ins = n-l;
    cout<<"Deletions: "<< del <<endl;
    cout<<"Insertions: "<< ins <<endl;


}
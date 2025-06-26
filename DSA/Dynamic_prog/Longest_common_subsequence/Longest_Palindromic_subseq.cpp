// Find longest palindromic subsequence in given string
// ex . agbcba , ans : 5
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>> a;
    string b = a;
    reverse(b.begin(),b.end());
    // apply LCS
    int m = a.length();
    int n = b.length();
    vector<vector<int>> dp(m+1 , vector<int>(n+1 , -1));
    for(int i=0 ; i<m+1 ;i++){
        for(int j=0; j <n+1 ; j++){
            if( i==0 || j==0 ){
                dp[i][j] = 0;
            }
            else{
                if(a[i-1] == b[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1; 
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
    }
    cout<<"LPS length: "<<dp[m][n]<<endl;
    

}
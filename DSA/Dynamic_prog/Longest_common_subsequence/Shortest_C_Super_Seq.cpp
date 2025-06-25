#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;

    int m = str1.length();
    int n = str2.length();

    // DP table for LCS
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    // Build the LCS DP table
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(str1[i-1] == str2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // Construct the Shortest Common Supersequence from the LCS table
    string scs = "";
    int i = m, j = n;

    while(i > 0 && j > 0) {
        if(str1[i-1] == str2[j-1]) {
            scs.push_back(str1[i-1]);
            i--; j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) {
            scs.push_back(str1[i-1]);
            i--;
        }
        else {
            scs.push_back(str2[j-1]);
            j--;
        }
    }

    // Add remaining characters
    while(i > 0) {
        scs.push_back(str1[i-1]);
        i--;
    }
    while(j > 0) {
        scs.push_back(str2[j-1]);
        j--;
    }

    // Since we constructed from the back, reverse the result
    reverse(scs.begin(), scs.end());

    cout << "Shortest Common Supersequence: " << scs << endl;

    return 0;
}

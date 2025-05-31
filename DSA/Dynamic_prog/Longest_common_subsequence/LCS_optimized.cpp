#include<bits/stdc++.h>
using namespace std;

int main(){
    string text1;
    string text2;
    cin>>text1>>text2;
    int n = text1.length();
    int m = text2.length();

    // Always make text1 the longer string to save space
    if (n < m) {
        swap(text1, text2);
        swap(n, m);
    }
    // m is shorter now.
    vector<int> prev(m + 1, 0), curr(m + 1, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                curr[j] = 1 + prev[j - 1];
            } else {
                curr[j] = max(prev[j], curr[j - 1]);
            }
        }
        prev = curr; // move to next row
    }

    cout<< prev[m];

}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int T; 
    cin >> T;
    while (T--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        // 1) Already all zeroes?
        if (count(s.begin(), s.end(), '1') == 0) {
            cout << "Alice\n";
            continue;
        }
        // 2) k == 1 and there's at least one '1'
        if (k == 1) {
            cout << "Alice\n";
            continue;
        }
        // 3) Check first k and last k
        bool firstUniform = true, lastUniform = true;
        for (int i = 1; i < k; i++) {
            if (s[i] != s[0]) firstUniform = false;
            if (s[n - 1 - i] != s[n - 1]) lastUniform = false;
        }
        // If either block is mixed, Alice wins
        if (!firstUniform || !lastUniform) {
            cout << "Alice\n";
            continue;
        }
        // Both are uniform. If they differ, Alice still wins.
        if (s[0] != s[n - 1]) {
            cout << "Alice\n";
        } else {
            // Both uniform and equal → Bob can lock in
            cout << "Bob\n";
        }
    }
    return 0;
}

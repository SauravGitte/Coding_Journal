#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        if (k > 1) {
            cout << "YES\n";
        } else {
            int max_strength = *max_element(a.begin(), a.end());
            if (a[j - 1] >= max_strength)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

    int T; 
    cin>>T;
    while (T--) {
        int N; 
        cin >> N;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                int val = (i + j) % N;   // cyclic Latin square
                if (j) cout << ' ';
                cout << val;
            }
            cout << '\n';
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        string result(n, '0');
        
        vector<int> leftMin(n), rightMax(n);
        
        // leftMin[i] = minimum value in a[0...i]  
        leftMin[0] = a[0];
        for (int i = 1; i < n; i++) {
            leftMin[i] = min(leftMin[i-1], a[i]);
        }
        
        // rightMax[i] = maximum value in a[i...n-1]
        rightMax[n-1] = a[n-1];
        for (int i = n-2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i+1], a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            bool canWin = false;
            
            // a[i] can win if it can be both:
            // 1. Minimum of some prefix [0...r] where r >= i
            // 2. Maximum of some suffix [l...n-1] where l <= i
            
            // Check all valid ranges
            for (int r = i; r < n; r++) {
                if (leftMin[r] == a[i]) {
                    // a[i] is minimum of [0...r]
                    for (int l = 0; l <= i; l++) {
                        if (rightMax[l] == a[i]) {
                            // a[i] is maximum of [l...n-1]
                            canWin = true;
                            break;
                        }
                    }
                    if (canWin) break;
                }
            }
            
            result[i] = canWin ? '1' : '0';
        }
        
        cout << result << "\n";
    }
    
    return 0;
}
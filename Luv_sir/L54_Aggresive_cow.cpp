/*
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls.
 The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall.
 To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, 
 such that the minimum distance between any two of them is as large as possible.
  What is the largest minimum distance?
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int n, cows ;
int positions[N];

bool canPlaceCows(int minDist){
    int cows_ct = cows - 1;
    // I placed the first cow
    int last_pos = positions[0];
    for (int i = 1; i < n; i++) {
        if (positions[i] - last_pos >= minDist) {
            cows_ct--;
            last_pos = positions[i];
        }
        if (cows_ct == 0) break;
    }
    return cows_ct == 0;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        cin>> n >> cows;
        for(int i=0 ; i<n ; i++){
            cin >> positions[i];
        }
        sort(positions,positions+n);
        // lo TTTTFFFFF high
        int lo =0, hi = 1e9 ,mid;
        while(hi - lo > 1 ){
            int mid = (lo + hi)/2 ;
            if(canPlaceCows(mid)){
                lo = mid;
            }
            else{
                hi = mid-1;
            }
        } // n * log(10^9)
        if(canPlaceCows(hi)){
            cout<< hi << endl;
        }
        else{
            cout<< lo << endl;
        }
    }
}
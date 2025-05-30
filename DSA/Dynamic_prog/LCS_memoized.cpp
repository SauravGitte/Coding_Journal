#include<bits/stdc++.h>
using namespace std;

int static t[1001][1001];

int LCS(string &x, string &y ,int n, int m ){
    //base case
    if(n==0 || m==0){
        return 0;
    }
    if(t[n][m]!= -1) return t[n][m];

    //choice diagram
    if(x[n-1] == y[m-1])
        t[n][m] = 1 + LCS(x,y,n-1,m-1);
    else{
        t[n][m] = max(LCS(x,y,n,m-1) , LCS(x,y,n-1,m));
    }
    return t[n][m];
}

int main(){
    string x,y;
    cin>>x>>y;
    memset(t,-1,sizeof(t));
    int n = x.length();
    int m = y.length();
    cout<<LCS(x,y,n,m);
}
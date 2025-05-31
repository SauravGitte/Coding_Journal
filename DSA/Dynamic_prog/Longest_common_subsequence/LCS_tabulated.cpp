#include<bits/stdc++.h>
using namespace std;

/*
good test case :
if used : 
if(x[i-1]==y[j-1]){
    v[i][j] = 1 + max(v[i-1][j],v[i][j-1]);
}
aab
ab
3  // wrong ,inflated result
0 0 0 
0 1 1 
0 2 2 
0 2 3

must use : 
if(x[i-1]==y[j-1]){
    v[i][j] = 1 + v[i-1][j-1];
}
aab
ab
2  // correct
0 0 0 
0 1 1 
0 1 1 
0 1 2 
*/

int main(){
    string x;
    string y;
    cin>>x;
    cin>>y;
    int m = x.length();
    int n = y.length();
    // m+1 and n+1 2d array
    vector<vector<int>> v(m+1,vector<int>(n+1,-1)) ;
    //initialisation
    for(int i=0 ; i<m+1;i++){
        v[i][0] = 0 ;
    }
    for(int j=0 ; j< n+1; j++){
        v[0][j] = 0 ;
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1]){
                v[i][j] = 1 + v[i-1][j-1];
            }
            else{
                v[i][j] = max(v[i-1][j],v[i][j-1]) ;
            }

        }
    }
    cout<< v[m][n]<<endl;
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

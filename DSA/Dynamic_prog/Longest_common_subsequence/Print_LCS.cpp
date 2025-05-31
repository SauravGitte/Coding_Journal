#include<bits/stdc++.h>
using namespace std;

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
    // now backrack the table to print LCS 
    string s="";
    int i= m; 
    int j = n;
    while(  i>0 && j>0){
        if( x[i-1] == y[j-1]){
            // add to string
            s.push_back(x[i-1]);
            i--;
            j--;
        }
        else{ // dont add to string
            if(v[i-1][j]>v[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;

}
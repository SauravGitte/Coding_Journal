#include<bits/stdc++.h>
using namespace std;

// input:
// 5 3
// 1 1
// 1 3
// 2 5
// output:
// 0 0 0 0 0 0 
// 0 1 0 1 0 0 
// 0 0 0 0 0 1 
// 0 1 0 0 0 0 
// 0 0 0 0 0 0 
// 0 0 1 0 0 0


int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency matrix for undirected graph
    // time complexity: O(n)
    int adj[n+1][n+1];
    memset(adj, 0, sizeof(adj)); // intialise to zero
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;  // this statement will be removed in case of directed graph
    }
    //print adjacency matrix
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// input:
// 5 6
// 1 2
// 1 3
// 2 4
// 3 4
// 3 5
// 4 5
// output:
// 0-->{  }
// 1-->{ 2,3, }
// 2-->{ 4, }
// 3-->{ 4,5, }
// 4-->{ 5, }
// 5-->{  }


int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency list for directed graph
    // time complexity: O(E)
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        // u —> v
        cin >> u >> v;
        adj[u].push_back(v);
    }

    //printing
    for(int i=0;i<n+1;i++){
        cout<<i<<"-->{ ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<",";
        }
        cout<<" }"<<endl;
    }

    return 0;

}
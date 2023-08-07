#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

int adj_matrix[N][N];
vector<int> adj[N];


int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        
        adj[u].push_back(v);
    }

    for(int i = 1; i <= n; i++)
    {
        for(auto j : adj[i])
        {
            adj_matrix[i][j] = 1;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }

        cout << endl;
    }
}
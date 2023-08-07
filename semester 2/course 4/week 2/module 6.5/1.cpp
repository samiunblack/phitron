#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

vector<int> adj[N];
int visited[N];


void dfs(int node)
{
    visited[node] = 1;

    for(auto v : adj[node])
    {
        if(visited[v] == 0)
        {
            dfs(v);
        }
    }

    cout << node << " ";
}


int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
}
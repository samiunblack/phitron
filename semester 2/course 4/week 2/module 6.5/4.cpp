#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

vector<int> adj[N];

int depth[N];
int visited[N];


void dfs(int node)
{
    visited[node] = 1;

    for(auto n : adj[node])
    {
        if(visited[n] == 0)
        {
            depth[n] = depth[node] + 1;
            dfs(n);
        }
    }
} 


int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    int x;
    cin >> x;

    cout << "Depth of " << x << " = " << depth[x];
}
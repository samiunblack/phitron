#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

vector<int> adj[N];

int height[N];
int visited[N];


void dfs(int node)
{
    visited[node] = 1;

    for(auto n : adj[node])
    {
        if(visited[n] == 0)
        {
            dfs(n);

            height[node] = max(height[node], height[n] + 1);
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

    cout << "Height of " << x << " = " << height[x];
}
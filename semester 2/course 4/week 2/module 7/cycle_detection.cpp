#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];
bool cycle = false;

bool dfs(int node, int p)
{
    visited[node] = 1;

    for(auto v : adj[node])
    {
        if (v == p) continue;
        if(visited[v]) return true;
        cycle = cycle || dfs(v, node);
    }

    return cycle;
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
    
    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == 0)
        {
            if(dfs(i, -1))
            {
                cout << "Cycle Deteced";
                break;
            }
            else cout << "No Cycle Detected" << endl;
        }
        
    }
}
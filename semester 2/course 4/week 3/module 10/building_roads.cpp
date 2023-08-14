#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];
int last_v = -1;

void dfs(int node)
{
    visited[node] = 1;
    last_v = node;

    for(auto v : adj[node])
    {
        if(visited[v]) continue;
        dfs(v);
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

    vector<int> roads;
    int c = 0;

    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == 0)
        {
            if(i != 1)
            {
                c++;
                roads.push_back(last_v);
                roads.push_back(i);
            }
            dfs(i);
        }
    }

    cout << c << endl;

    for(int i = 0; i < roads.size(); i++)
    {
        cout << roads[i] << " ";
    }
}
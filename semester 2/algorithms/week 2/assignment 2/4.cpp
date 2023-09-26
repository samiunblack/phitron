#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];

void dfs(int node, int* cnt)
{
    visited[node] = 1;
    *cnt = *cnt + 1;

    for(auto v : adj[node])
    {
        if(visited[v]) continue;
        dfs(v, cnt);
    }
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
    }

    int x;
    cin >> x;

    int cnt = 0;

    dfs(x, &cnt);

    cout << cnt - 1;   
}
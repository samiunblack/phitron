#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];
int level[N];

void bfs(int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    level[node] = 0;

    while(!q.empty())
    {
        int cur = q.front();
        cout << cur << " ";
        q.pop();

        for(auto v : adj[cur])
        {
            if(visited[v] == 0)
            {
                q.push(v);
                level[v] = level[cur] + 1;
                visited[v] = 1;
            }
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

    bfs(1);
    cout << endl;

    for(int i = 1; i <= n; i++)
    {
        cout << "Level of " << i << " : " << level[i] << endl;
    }
}
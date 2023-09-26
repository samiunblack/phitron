#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];

int level[N];
int parent[N];


void bfs(int src)
{
    queue<int> q;
    q.push(src);

    level[src] = 1;
    visited[src] = 1;
    parent[src] = -1;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(auto v : adj[cur])
        {
            if(visited[v]) continue;
            visited[v] = 1;
            level[v] = level[cur] + 1;
            parent[v] = cur;
            q.push(v);
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

    if(level[n] < 1)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        stack<int> route;

        int cur = n;

        while(cur != -1)
        {
            route.push(cur);
            cur = parent[cur];
        }

        cout << level[n] << endl;

        while(!route.empty())
        {
            cout << route.top() << " ";
            route.pop();
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int visited[N];
vector<int> dist(N, -1);

vector<int> adj[N];

void bfs(int src)
{
    queue<int> q;

    dist[src] = 0;
    visited[src] = 1;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v : adj[u])
        {
            if(visited[v]) continue;
            else
            {
                visited[v] = 1;
                dist[v] = dist[u] + 1;
                q.push(v);    
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
    }

    int src, dst;
    cin >> src >> dst;

    bfs(src);

    if(dist[dst] != -1)
    {
        cout << "YES";
    }
    
    else cout << "NO";
}
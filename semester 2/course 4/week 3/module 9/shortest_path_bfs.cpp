#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];

int level[N];
int parent[N];

void bfs(int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    parent[node] = -1;
    level[node] = 0;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();

        for(auto v : adj[curr])
        {
            if(visited[v] == 0)
            {
                visited[v] = 1;
                q.push(v);
                parent[v] = curr;
                level[v] = level[curr] + 1;
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

    int s, d;
    cin >> s >> d;
    
    bfs(s);

    cout << "shortest path distance: " << level[d] << endl;

    vector<int> path;

    int curr = d;
    while(curr != -1)
    {
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(), path.end());

    cout << "shortest path: ";

    for(int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
}
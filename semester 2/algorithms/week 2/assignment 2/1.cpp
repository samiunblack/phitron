#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];
int level[N];


void bfs(int node)
{
    for(int i = 0; i < N; i++)
        {
            level[i] = -1;
            visited[i] = 0;
        }
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    level[node] = 0;

    while(!q.empty())
    {
        int cur = q.front();
        
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

    int q;
    cin >> q;


    while(q--)
    {
        
        int s, d;
        cin >> s >> d;
        bfs(s);
        cout << level[d] << endl;
    }
}
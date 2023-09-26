#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];

void dfs(int node)
{
    visited[node] = 1;

    for(auto v : adj[node])
    {
        if(visited[v]) continue;
        dfs(v);
    }
}

void reinitialize()
{
    for(int i = 0; i < N; i++)
    {
        visited[i] = 0;
    }
}

void print(int node)
{
    visited[node] = 1;
    cout << node << " ";

    for(auto v : adj[node])
    {
        if(visited[v]) continue;
        print(v);
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

    vector<int> cc;

    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == 0)
        {
            dfs(i);
            cc.push_back(i);
        }
    }

    cout << cc.size() << endl;

    int i = 1;
    reinitialize();
    
    for(auto n : cc)
    {
        cout << "Component " << i << " : ";
        print(n);
        cout << endl;
        i++;
    }
}
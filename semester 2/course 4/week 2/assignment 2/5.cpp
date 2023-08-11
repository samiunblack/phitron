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
        adj[v].push_back(u);
    }

    vector<int> v;

    int j = 1;

    for(int i = 0; i <= 1000; i++)
    {
        if(visited[i] == 0)
        {
            int count = 0;
            dfs(i, &count);
            if(count > 1)
            {
                v.push_back(count);
            }
        }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
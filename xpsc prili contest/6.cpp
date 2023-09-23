#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];

void solve(int k, int s, vector<int>& g)
{
    for(int i = 0; i < N; i++)
    {
        visited[i] = 0;
    }

    g.push_back(s);

    if(k >= 1)
    {
        for(int i = 0; i < adj[s].size(); i++)
        {
            if(visited[adj[s][i]] != 1) 
            {
                g.push_back(adj[s][i]);
                visited[adj[s][i]] = 1;
            }

            for(int j = 1; j < k; j++)
            {
                for(int v : adj[adj[s][i]])
                {
                    if(visited[v] != 1)
                    {
                        visited[v] = 1;
                        g.push_back(v);
                    }
                }
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

    int r, j, k;
    cin >> r >> j >> k;
    
    vector<int> rv;
    vector<int> jv;

    solve(k, r, rv);
    solve(k, j, jv);

    for(int i = 0; i < rv.size(); i++)
    {
        for(int j = 0; j < jv.size(); j++)
        {
            if(rv[i] == jv[j])
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}

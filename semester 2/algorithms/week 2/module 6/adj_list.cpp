#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int>> adj[N];

int main()
{
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});

        //adj[v].push_back(u);
    }

    for(int i  = 1; i <= n; i++)
    {
        cout << i << ": ";
        for(int j = 0; j < adj[i].size(); j++)
        {
            cout << "{" << adj[i][j].first << " " << adj[i][j].second << "} ";
        }

        cout << endl;
    }
}
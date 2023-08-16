#include <bits/stdc++.h>
using namespace std;

/*
7
10
1 2 6
1 3 5
1 4 5
2 5 -1
3 2 -2
3 5 1
4 3 -2
4 6 -1
5 7 3
6 7 3
*/
const int N = 1e5 + 7;
const int INF = 1e9 + 9;
typedef pair<int, int> pii;

vector<pii> adj[N];
vector<int> dist(N, INF);

void b_ford(int src)
{
    queue<pii> q;
    dist[src] = 0;

    q.push({src, dist[src]});

    while(!q.empty())
    {
        int u = q.front().first;
        q.pop();

        for(auto vpair : adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                q.push({v, dist[v]});
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
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
    }

    for(int i = 0; i < n - 1; i++)
    {
        b_ford(1);
    }


    for(int i = 1; i <= n; i++)
    {
        cout << "distance of " << i << " : " << dist[i] << endl;
    }
}
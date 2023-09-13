#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e5 + 5;
const int INF = 1e9 + 6;
int visited[N];

vector<pii> adj[N];
int dist[N];

void dist_init()
{
    for(int i = 0; i < N; i++)
    {
        dist[i] = INF;
    }
}

void dijkstra(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[src] = 0;
    pq.push({dist[src], src});

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        visited[u] = 1;

        for(pii vpair : adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(visited[v]) continue;
            if(dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
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
        adj[v].push_back({u, w});
    }

    dist_init();

    int src;
    cin >> src;

    dijkstra(src);

    for(int i = 0; i <= n; i++)
    {
        cout << dist[i] << " ";
    }
}
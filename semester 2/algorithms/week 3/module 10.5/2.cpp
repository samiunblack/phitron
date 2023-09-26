#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e5 + 5;
const int INF = 1e9 + 9;

vector<pii> adj[N];
int visited[N];
vector<int> dist(N, INF);


void dijkstra(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    
    dist[src] = 0;
    pq.push({dist[src], src});

    while(!pq.empty())
    {
        int cur = pq.top().second;
        pq.pop();

        visited[cur] = 1;

        for(auto vpair : adj[cur])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(dist[v] > dist[cur] + w)
            {
                dist[v] = dist[cur] + w;
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
    }

    int x, y;
    cin >> x >> y;

    dijkstra(x);

    cout << dist[y];
}
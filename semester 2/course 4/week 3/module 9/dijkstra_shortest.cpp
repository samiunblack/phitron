#include <bits/stdc++.h>
using namespace std;

/*
7
8
1 2 3
1 3 5
3 4 1
4 6 1
2 5 6
5 6 1
5 7 2
3 7 12
*/

typedef pair<int, int> pii;

const int N = 1e5 + 5;
const int INF = 1e9 + 10;

vector<pii> adj[N];
int visited[N];
int parent[N];

vector<int> dist(N, INF);

void dijkstra(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[src] = 0;
    pq.push({dist[src], src});
    parent[src] = -1;
    
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        visited[u] = true;

        for(pii vpair : adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(visited[v]) continue;
            if(dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
                parent[v] = u;
            }
        }
    }
}

void print_shortest(int src, int des)
{
    dijkstra(src);

    stack<int> st;

    int cur = des;
    while(cur != -1)
    {
        st.push(cur);
        cur = parent[cur];
    }

    cout << "distance of shortest path: " << dist[des] << endl;

    cout << "shortest path: ";

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
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

    print_shortest(1, 7);
}
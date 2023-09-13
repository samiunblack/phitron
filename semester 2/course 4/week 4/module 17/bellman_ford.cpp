#include<bits/stdc++.h>
using namespace std;


typedef pair<int,int> pii;

const int N = 1e5+7;
const int INF = 1e8;

vector<pii> g[N];

int dist[N];
int n, m, src;

void bellman_ford(int src)
{
	for(int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }

	dist[src] = 0;

	for(int i = 1; i < n; i++)
	{
		for(int u = 1; u <= n; u++)
		{
			for(pii vpair: g[u])
			{
				int v = vpair.first;
				int w = vpair.second;

				if(dist[u] != INF && dist[v] > dist[u] + w)
				{
					dist[v] = dist[u] + w;
				}
			}
		}
	}
}

void neg_cycle()
{
	bool cycle = false;

	for(int u = 1; u <= n; u++)
	{
		for(pii vpair: g[u])
		{
			int v = vpair.first;
			int w = vpair.second;

			if(dist[u] != INF && dist[v] > dist[u] + w)
			{
				cycle = true;
				break;
			}
		}
	}
	
}

int main()
{
    cin >> n >> m >> src;

    for(int i = 0; i < m; i++)
    {
    	int u, v, w;
    	cin >> u >> v >> w;

    	g[u].push_back({v, w});
    }

    bellman_ford(src);

    for(int i = 1; i <= n; i++)
    {
    	cout << dist[i] << " ";
    }
    
}
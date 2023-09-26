#include<bits/stdc++.h>
using namespace std;


typedef pair<long long,long long> pii;

const long long N = 1e5+7;
const long long INF = 1e18;

vector<pii> g[N];

long long dist[N];
long long n, m, src;

void bellman_ford(long long src)
{
	for(long long i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }

	dist[src] = 0;

	for(long long i = 1; i < n; i++)
	{
		for(long long u = 1; u <= n; u++)
		{
			for(pii vpair: g[u])
			{
				long long v = vpair.first;
				long long w = vpair.second;

				if(dist[u] != INF && dist[v] > dist[u] + w)
				{
					dist[v] = dist[u] + w;
				}
			}
		}
	}
}

bool neg_cycle()
{
	bool cycle = false;

	for(long long u = 1; u <= n; u++)
	{
		for(pii vpair: g[u])
		{
			long long v = vpair.first;
			long long w = vpair.second;

			if(dist[u] != INF && dist[v] > dist[u] + w)
			{
				cycle = true;
				break;
			}
		}
	}

    return cycle;
	
}

int main()
{
    cin >> n >> m;

    for(long long i = 0; i < m; i++)
    {
    	long long u, v, w;
    	cin >> u >> v >> w;

    	g[u].push_back({v, w});
    }

    long long src;
    cin >> src;

    bellman_ford(src);

    
    bool cycle = neg_cycle();

    long long t;
    cin >> t;

    

    while(t--)
    {
        if(!cycle)
        {
            long long d;
            cin >> d;

            if(dist[d] == INF) cout << "Not Possible" << endl;
            else cout << dist[d] << endl;
        } 
    }

    if(cycle)
    {
        cout << "Negative Cycle Detected";
    }
}
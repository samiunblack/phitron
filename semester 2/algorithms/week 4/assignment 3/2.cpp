#include <bits/stdc++.h>
using namespace std;


const long long N = 1e3 + 5;
const long long INF = 1e18 + 9;

vector<long long> adj[N];
long long dist[N][N];
long long n, m;

void init_dist()
{
    for(long long i = 1; i <= n; i++)
    {
        for(long long j = 1; j <= n; j++)
        {
            if(i != j)
            dist[i][j] = INF;
        }
    }
}

void print_matrix()
{
    for(long long i = 1; i <= n; i++)
    {
        for(long long j = 1; j <= n; j++)
        {
            if(dist[i][j] == INF) cout << "X" << " ";
            else cout << dist[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    cin >> n >> m;
    init_dist();

    for(long long i = 0; i < m; i++)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
    }    

    //floyd warshall
    for(long long k = 1; k <= n; k++)
    {
        for(long long i = 1; i <= n; i++)
        {
            for(long long j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    long long q;
    cin >> q;

    while(q--)
    {
        long long a, b;
        cin >> a >> b;

        if(dist[a][b] == INF) cout << -1 << endl;
        else cout << dist[a][b] << endl;
    }
}
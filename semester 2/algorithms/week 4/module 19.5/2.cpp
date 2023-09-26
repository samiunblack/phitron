#include <bits/stdc++.h>
using namespace std;
 
typedef pair<int, int> pii;
 
const int N = 1e5 + 5;
const int INF = 1e9 + 7;
 
vector<pii> adj[N];
vector<vector<int>> edge_list;
int visited[N];
 
void reset()
{
    for(int i = 0; i < N; i++)
    {
        visited[i] = 0;
    }
}
 
void prims(int src)
{
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    pq.push({0, src, -1}); // weight node parent
 
    while(!pq.empty())
    {
        vector<int> curr = pq.top();
        if(visited[curr[1]] == 0)
        {
            edge_list.push_back(curr);
            visited[curr[1]] = 1;
        }
        pq.pop();
 
        for(auto child : adj[curr[1]])
        {
            if(visited[child.first] == 0) {
                pq.push({child.second, child.first, curr[1]});
            };
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
    reset();
    prims(1);
 
    long long sum = 0;
 
    if(edge_list.size() < n)
    {
        cout << "-1";
        return 0;
    }
 
    for(int i = 0; i < edge_list.size(); i++)
    {
        sum += (long long)edge_list[i][0];
    }
 
    cout << sum;
} 
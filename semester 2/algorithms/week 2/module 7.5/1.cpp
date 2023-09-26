#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];


void bfs(int node)
{
    queue<int> q;
    stack<int> st;

    q.push(node);
    visited[node] = 1;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        st.push(cur);

        for(auto v : adj[cur])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = 1;
        }
    }

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
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);
}
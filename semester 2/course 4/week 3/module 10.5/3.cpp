#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

typedef pair<int, int> pii;
vector<string> g;
int visited[N][N];

vector<pii> direct = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < g.size() && j >= 0 && j < g[i].size());
}

void dfs(int i, int j)
{
    visited[i][j] = 1;

    for(auto d : direct)
    {
        int x = i + d.first;
        int y = j + d.second;
        
        if(isValid(x, y) && g[x][y] != 'x' && visited[x][y] != 1)
        {
            dfs(x, y);
        }
    }
}

void bfs(int i, int j)
{
    queue<pii> q;
    q.push({i, j});
    visited[i][j] = 1;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(auto d : direct)
        {
            int n = x + d.first;
            int m = y + d.second;

            if(isValid(n, m) && g[n][m] != 'x' && visited[n][m] != 1)
            {
                q.push({n, m});
                visited[n][m] = 1;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int si, sj, di, dj;

    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        
        for(int j = 0; j < x.size(); j++)
        {
            if(x[j] == 's')
            {
                si = i;
                sj = j;
            }
            if(x[j] == 'e')
            {
                di = i;
                dj = j;
            }
        } 

        g.push_back(x);
    }
    
    bfs(si, sj);

    if(visited[di][dj] == 1) cout << "YES";
    else cout << "NO";
}
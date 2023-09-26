#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

typedef pair<int, int> pii;

vector<string> g;
int visited[N][N];
int level[N][N];
int wee = 0;

vector<pii> direct = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < g.size() && j >= 0 && j < g[i].size());
}


void bfs(int i, int j)
{
    queue<pii> q;
    q.push({i, j});
    visited[i][j] = 1;
    level[i][j] = 0;

    while(!q.empty())
    {
        wee++;
        pii cur = q.front();
        q.pop();

        for(auto d : direct)
        {
            int x = cur.first + d.first;
            int y = cur.second + d.second;

            if(isValid(x, y) && g[x][y] != '-' && visited[x][y] != 1)
            {
                q.push({x, y});
                visited[x][y] = 1;
                level[x][y] = level[cur.first][cur.second] + 1;
            }
        }
    }
}

void reset_level()
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            level[i][j] = -1;
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

        g.push_back(x);
    }

    
    int mn = INT_MAX;
    reset_level();
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(visited[i][j] == 0 && g[i][j] == '.')
            {
                wee = 0;
                bfs(i, j);
                mn = min(wee, mn);
            }
        }
    }

    mn = min(wee, mn);
    if(mn == 0) cout << -1;
    else cout << mn;
}
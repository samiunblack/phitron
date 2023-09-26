#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e3 + 5;

int visited[N][N];

int level[N][N];


vector<pii> direc = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool isValid(int i, int j, int n, int m)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int i, int j, int n, int m)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            visited[i][j] = 0;
            level[i][j] = -1;
        }
    }
    queue<pii> q;
    q.push({i, j});
    visited[i][j] = 1;
    level[i][j] = 0;

    while(!q.empty())
    {
        pii upair = q.front();
        int x = upair.first;
        int y = upair.second;
        q.pop();

        for(auto d: direc)
        {
            int ni = x + d.first;
            int nj = y + d.second;

            if(isValid(ni, nj, n, m) && !visited[ni][nj])
            {
                q.push({ni, nj});
                visited[ni][nj] = 1;
                level[ni][nj] = level[x][y] + 1;
            }
        }
    }
}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;

        bfs(ki, kj, n, m);

        cout << level[qi][qj] << endl;
    }
}
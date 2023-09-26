#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 8;

int visited[N][N];

int level[N][N];


vector<pii> direc = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < 8 && j >= 0 && j < 8);
}

void bfs(int i, int j)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            visited[i][j] = 0;
            level[i][j] = 0;
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

            if(isValid(ni, nj) && !visited[ni][nj])
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
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;

        int si, sj, di, dj;

        si = x[0] - 'a';
        sj = x[1] - '1';

        di = y[0] - 'a';
        dj = y[1] - '1';

        bfs(si, sj);

        cout << level[di][dj] << endl;
    }
}
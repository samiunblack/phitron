#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e3 + 10;

vector<string> g;
int visited[N][N];

int level[N][N];
pii parent[N][N];

int n, m;
vector<pii> direc = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int i, int j)
{
    queue<pii> q;
    q.push({i, j});
    visited[i][j] = 1;
    level[i][j] = 0;
    parent[i][j] = {-1, -1};

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

            if(isValid(ni, nj) && !visited[ni][nj] && g[ni][nj] != '#')
            {
                q.push({ni, nj});
                visited[ni][nj] = 1;
                level[ni][nj] = level[x][y] + 1;
                parent[ni][nj] = {x, y};
            }
        }
    }
}

void print_way(int i, int j, int si, int sj)
{
    stack<pii> st;
    
    pii cur = {i, j};

    pii np = {-1, -1};

    while(parent[cur.first][cur.second] != np)
    {
        st.push(cur);
        cur = parent[cur.first][cur.second];
    }

    vector<char> path;

    while(!st.empty())
    {
        if(st.top().first + 1 == si)
        {
            path.push_back('U');
            si = st.top().first;
        }
        else if(st.top().first - 1 == si)
        {
            path.push_back('D');
            si = st.top().first;
        }
        else if(st.top().second + 1 == sj)
        {
            path.push_back('L');
            sj = st.top().second;
        }
        else if(st.top().second - 1 == sj)
        {
            path.push_back('R');
            sj = st.top().second;
        }
        st.pop();
    }

    for(int i = 0; i < path.size(); i++)
    {
        cout << path[i];
    }
}


int main()
{
    cin >> n >> m;
    int si, sj, di, dj;

    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        for(int j = 0; j < m; j++)
        {
            if(x[j] == 'A')
            {
                si = i, sj = j;
            }
            if(x[j] == 'B')
            {
                di = i, dj = j;
            }
        }
        g.push_back(x);
    }

    bfs(si, sj);

    if(level[di][dj] == 0) cout << "NO";
    else
    {
        cout << "YES" << endl;
        cout << level[di][dj] << endl;
        print_way(di, dj, si, sj);
    }
}
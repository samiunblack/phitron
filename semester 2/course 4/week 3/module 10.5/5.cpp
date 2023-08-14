#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
typedef pair<int, int> pii;

vector<string> g;
int visited[N][N];

int level[N][N];
pii parent[N][N];

vector<pii> direct = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};


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
    parent[i][j] = {-1, -1};

    while(!q.empty())
    {
        pii cur = q.front();
        q.pop();

        for(auto d : direct)
        {
            int x = cur.first + d.first;
            int y = cur.second + d.second;

            if(isValid(x, y) && g[x][y] != 'x' && visited[x][y] != 1)
            {
                q.push({x, y});
                visited[x][y] = 1;
                level[x][y] = level[cur.first][cur.second] + 1;
                parent[x][y] = cur;
            }
        }
    }
}

void print_path(int i, int j, int si, int sj)
{
    stack<pii> st;

    int ci = i;
    int cj = j;

    pii invalid = {-1, -1};

    while(parent[ci][cj] != invalid)
    {
        st.push({ci, cj});
        pii p = parent[ci][cj];
        ci = p.first;
        cj = p.second;
    }

    vector<char> path;

    while(!st.empty())
    {
        int x = st.top().first;
        int y = st.top().second;

        if(si == x + 1)
        {
            path.push_back('U');
            si = x;
        }
        else if(si == x - 1)
        {
            path.push_back('D');
            si = x;
        }
        else if(sj == y + 1)
        {
            path.push_back('L');
            sj = y;
        }
        else if(sj == y - 1)
        {
            path.push_back('R');
            sj = y;
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
    int n, m;
    cin >> n >> m;
    int si, sj, di, dj;

    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;

        for(int j = 0; j < x.size(); j++)
        {
            if(x[j] == 's') si = i, sj = j;
            if(x[j] == 'e') di = i, dj = j;
        }

        g.push_back(x);
    }

    bfs(si, sj);

    if(level[di][dj] == 0)
    {
        cout << -1;
    }
    else
    {
        cout << level[di][dj] << endl;
        print_path(di, dj, si, sj);
    }
}
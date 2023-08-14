#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector<string> g;

void dfs(int i, int j)
{
    g[i][j] = '#';

    if(i + 1 < g.size() && g[i + 1][j] == '.')
    {
        dfs(i + 1, j);
    }
    if(i - 1 >= 0 && g[i - 1][j] == '.')
    {
        dfs(i - 1, j);
    }
    if(j + 1 < g[i].size() && g[i][j + 1] == '.')
    {
        dfs(i, j + 1);
    }
    if(j - 1 >= 0 && g[i][j - 1] == '.')
    {
        dfs(i, j - 1);
    }
}


int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        g.push_back(x);
    }

    int room = 0;

    for(int i = 0; i < g.size(); i++)
    {
        for(int j = 0; j < g[i].size(); j++)
        {
            if(g[i][j] == '.')
            {
                room++;
                dfs(i, j);
            }
        }
    }

    cout << room;
}
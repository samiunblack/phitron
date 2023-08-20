#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int visited[N][N];
typedef pair<int, int> pii;

class Solution {
public:
    int mx = 0;
    int cur = 0;
    void reset()
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                visited[i][j] = 0;
            }
        }
    }

    vector<pii> direct = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    bool isValid(int i, int j, int n, int m)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    void dfs(int i, int j, vector<vector<int>>& grid)
    {
        visited[i][j] = 1;
        cur++;

        for(auto d : direct)
        {
            int x = d.first + i;
            int y = d.second + j;

            if(isValid(x, y, grid.size(), grid[i].size()) && visited[x][y] != 1 && grid[x][y] == 1)
            {
                dfs(x, y, grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(visited[i][j] == 0 && grid[i][j] == 1)
                {
                    cur = 0;
                    dfs(i, j, grid);
                    mx = mx > cur ? mx : cur;
                }
            }
        }

        return mx;
    }
};

int main()
{
    vector<vector<int>> grid =
    {
        {1,1,0,1,1},
        {1,0,0,0,0},
        {0,0,0,0,1},
        {1,1,0,1,1}
    };

    Solution s;
    cout << s.maxAreaOfIsland(grid) << endl;
}
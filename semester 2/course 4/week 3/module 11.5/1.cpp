#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e3 + 7;
int visited[N][N];

class Solution {
public:
    vector<pii> direct = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    

    bool isValid(int i, int j, int n, int m)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    void dfs(int i, int j, vector<vector<char>> & grid)
    {
        visited[i][j] = 1;

        for(auto d : direct)
        {
            int x = d.first + i;
            int y = d.second + j;

            if(isValid(x, y, grid.size(), grid[i].size()) && visited[x][y] != 1 && grid[x][y] != '0')
            {
                dfs(x, y, grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(visited[i][j] == 0 && grid[i][j] == '1')
                {
                    islands++;
                    dfs(i, j, grid);
                }
            }
        }

        return islands;
    }
};

int main()
{
    vector<vector<char>> grid = 
    {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };

    Solution s;
    cout << s.numIslands(grid) << endl;
}
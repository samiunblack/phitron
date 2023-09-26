#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int visited[N][N];

class Solution {
public:
    vector<pair<int, int>> direct = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool isValid(int i, int j, int n, int m)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    void dfs(int i, int j, int color, vector<vector<int>>& grid, int start)
    {
        visited[i][j] = 1;
        grid[i][j] = color;

        for(auto d : direct)
        {
            int x = d.first + i;
            int y = d.second + j;

            if(isValid(x, y, grid.size(), grid[i].size()) && visited[x][y] != 1 && grid[x][y] == start)
            {
                dfs(x, y, color, grid, start);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        for(int i = 0; i < image.size(); i++)
        {
            for(int j = 0; j < image.size(); j++)
            {
                if(i == sr && j == sc)
                {
                    dfs(i, j, color, image, image[sr][sc]);
                }
            }
        }

        return image;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> image =
    {
        {0,0,0},
        {0,0,0}
    };

    vector<vector<int>> ans = s.floodFill(image, 1, 0, 2);

    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }
}
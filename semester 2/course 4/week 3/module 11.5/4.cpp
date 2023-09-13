#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size();

        queue<pair<int, int>> q;

        for(int i = 0; i < n; i++) 
        {
            for(int j = 0; j < m; j++) 
            {
                if(grid[i][j] == 1) 
                {
                    q.push({i, j});
                }
            }
        }

        int ans = 0;

        while(!q.empty()) 
        {
            auto curr = q.front();
            q.pop();

            for(auto x: dir) 
            {
                int X = x.first + curr.first;
                int Y = x.second + curr.second;

                if(X >= 0 && Y >= 0 && X < n && Y < m && grid[X][Y] == 0)
                {
                    grid[X][Y] = 1 + grid[curr.first][curr.second];
                    q.push({X, Y});

                    ans = max(ans, grid[X][Y]);
                }
            }
        }
        
        return ans - 1;
    }
};
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
int dist[N][N];
int visited[N][N];

typedef pair<int, int> pii;
vector<pii> direct = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

class Solution {
public:
    int mx = INT_MIN;
    void reset()
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                dist[i][j] = INT_MIN;
                visited[i][j] = 0;
            }
        }
    }

    bool isValid(int i, int j, int n, int m)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    void bfs(int i, int j, vector<vector<int>>& grid)
    {
        queue<pii> q;
        q.push({i, j});
        visited[i][j] = 1;
        dist[i][j] = 0;

        while(!q.empty())
        {
            pii cur = q.front();
            int si = cur.first;
            int sj = cur.second;
            q.pop();

            for(auto d : direct)
            {
                int x = d.first + si;
                int y = d.second + sj;

                if(isValid(x, y, grid.size(), grid[si].size()) && visited[x][y] != 1)
                {
                    dist[x][y] = dist[si][sj] + 1;
                    visited[x][y] == 1;

                    if(grid[x][y] == 1)
                    {
                        mx = max(mx, dist[x][y]);
                        return;
                    }

                    q.push({x, y});
                }
            }
        }
    }

    int maxDistance(vector<vector<int>>& grid) {

        int sum = 0;

        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                sum += grid[i][j];
            }
        }

        if(sum == 0) return -1;

        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] == 0)
                {
                    reset();
                    bfs(i, j, grid);
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
        
    };

    Solution s;
    s.maxDistance(grid);
}
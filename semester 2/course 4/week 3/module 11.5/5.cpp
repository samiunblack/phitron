#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int visited[1005][1005];

bool isValid(int i, int j, int n, int m)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

bool bfs(int s1i, int s1j, int s2i, int s2j, vector<vector<int>>& grid1, vector<vector<int>>& grid2)
{
    queue<pair<int, int>> q1;
    queue<pair<int, int>> q2;

    q1.push({s1i, s1j});
    q2.push({s2i, s2j});
    bool found = true;
    if(visited[s2i][s2j] == 1) return false;
    else visited[s2i][s2j] = 1;

    while(!q2.empty())
    {
        pair<int, int> c2 = q2.front();
        pair<int, int> c1 = q1.front();
        q2.pop();
        q1.pop();
        

        if(c1 != c2)
        {
            found = false;
            break;
        }
        else
        {
            for(auto dpair : dir)
            {
                bool valid = isValid(c2.first + dpair.first, c2.second + dpair.second, grid2.size(), grid2[0].size());
                if(valid && visited[c2.first + dpair.first][c2.second + dpair.second] != 1 && grid2[c2.first + dpair.first][c2.second + dpair.second] == 1)
                {
                    visited[c2.first + dpair.first][c2.second + dpair.second] = 1;

                    if(grid1[c1.first + dpair.first][c1.second + dpair.second] == 1)
                    {
                        q2.push({c2.first + dpair.first, c2.second + dpair.second});
                        q1.push({c1.first + dpair.first, c1.second + dpair.second});
                    }
                    else
                    {
                        found = false;
                        q2.push({c2.first + dpair.first, c2.second + dpair.second});
                        q1.push({c1.first + dpair.first, c1.second + dpair.second});
                    }
                }
                
            }
        }
    }

    return found;
}

int main()
{
    //bfs from the start
    //if bfs doesn't match for first then break
    //if bfs doesnt match for second then continue

    vector<vector<int>> grid1 = {{1,0,1,0,1},{1,1,1,1,1},{0,0,0,0,0},{1,1,1,1,1},{1,0,1,0,1}};
    vector<vector<int>> grid2 = {{0,0,0,0,0},{1,1,1,1,1},{0,1,0,1,0},{0,1,0,1,0},{1,0,0,0,1}};

    int cnt = 0;

    for(int i = 0; i < grid1.size(); i++)
    {
        for(int j = 0; j < grid1[0].size(); j++)
        {
            if(grid2[i][j] == 1 && grid1[i][j] == 1 && visited[i][j] != 1)
            {
                if(bfs(i, j, i, j, grid1, grid2) == true) cnt++;
            }
        }
    }

    cout << cnt;
}
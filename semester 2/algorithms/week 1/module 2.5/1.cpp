#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int total = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            int l = 0;
            int r = grid[i].size() - 1;
            
            bool pos = false;
            while(l <= r)
            {
                int mid = (l + r) / 2;
                cout << "Mid: " << mid << endl;

                if(mid < grid[i].size() && grid[i][mid] < 0)
                {
                    if(mid - 1 < 0)
                    {
                        total += grid[i].size();
                        break;
                    }
                    else if(mid - 1 >= 0 && grid[i][mid - 1] >= 0)
                    {
                        total += grid[i].size() - mid;
                        break;
                    }
                    else if(mid == grid[i].size() - 1)
                    {
                        total += 1;
                        break;
                    }
                    else
                    {
                        l = 0;
                        r = mid - 1;
                        pos = false;
                    }

                    
                }
                else if(grid[i][mid] >= 0)
                {
                    l = mid + 1;
                    pos = true;
                    if(l < grid[i].size())
                    {
                        cout << "L: " << l << endl;
                        if(grid[i][l] < 0)
                        {
                            total += grid[i].size() - l;
                            break;
                        }
                        
                    }
                }
            }

            cout << endl;
        } 

        return total;   
    }
};

int main()
{
    
}
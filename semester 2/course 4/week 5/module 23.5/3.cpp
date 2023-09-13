#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[1005][10000];

    bool solve(int n, int s, vector<int>&  a)
    {
        if(n == 0 || s == 0)
        {
            if(s == 0) return true;
            return false;
        }

        if(dp[n][s] != -1) return dp[n][s];

        if(a[n - 1] <= s)
        {
            int op1 = solve(n - 1, s - a[n - 1], a);
            int op2 = solve(n - 1, s, a);

            return dp[n][s] = op1 || op2;
        }

        return dp[n][s] = solve(n - 1, s, a);
    }
    bool canPartition(vector<int>& nums) {
        int n, s= 0;
        n = nums.size();

        for(int i = 0; i < n; i++)
        {
            s += nums[i];
        }

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= s / 2; j++)
        {
            dp[i][j] = -1;
        }
    }

        if(s % 2 == 0)
        {
            bool ans = solve(n, s / 2, nums);

            return ans;
        }
        else
        {
            return false;
        }
    }
};
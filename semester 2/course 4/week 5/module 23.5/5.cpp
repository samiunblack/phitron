#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[1005][1005];

    int solve(int n, int s, vector<int> & a)
    {
        if(n == 0)
        {
            if(s == 0) return 1;
            return 0;
        }

        if(n >= 0 && s >=0 && dp[n][s] != -1) return dp[n][s];

        if(a[n - 1] <= s)
        {
            int op1 = solve(n - 1, s - a[n - 1], a);
            int op2 = solve(n - 1, s, a);

            return dp[n][s] = op1 + op2;
        }
        if(n >= 0 && s >= 0) 
        return dp[n][s] = solve(n - 1, s, a);
        else return 0;
    }

    int findTargetSumWays(vector<int>& a, int target) {
        int n;
        n = a.size();

        int s = 0;

        for(int i = 0; i < n; i++)
        {
            s += a[i];
        }

        int diff;
        diff = target;

        int s1 = (diff + s) / 2;

        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= s; j++)
            {
                dp[i][j] = -1;
            }
        }

        if(s1 < target || (diff + s) % 2 == 1) return 0;
        else return solve(n, s1, a);
    }
};
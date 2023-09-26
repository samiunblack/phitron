#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    int dp[1005][1005];

    int solve(int n, string a, int m, string b)
    {
        if(n == 0 || m == 0) return 0;
    
        if(dp[n][m] != -1) return dp[n][m];
    
        if(a[n - 1] == b[m - 1])
        {
            return dp[n][m] = solve(n - 1, a, m - 1, b) + 1;
        }
    
        else
        {
            int op1 = solve(n - 1, a, m, b);
            int op2 = solve(n, a, m - 1, b);
    
            return dp[n][m] = max(op1, op2);
        }
    }
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        string a, b;
        a = X;
        b = Y;
    
        for(int i = 0; i <= a.size(); i++)
        {
            for(int j = 0; j <= b.size(); j++)
            {
                dp[i][j] = -1;
            }
        }
    
        int ans = solve(a.size(), a, b.size(), b);
        
        return (a.size() + b.size()) - ans;
    }
};
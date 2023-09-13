#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& w, int amount) {
        int n;
        n = w.size();
        
        int s;
        s = amount;
        int dp[n + 1][s + 1];
        dp[0][0] = 0;
        for (int i = 1; i <= s; i++)
            dp[0][i] = INT_MAX - 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (w[i - 1] <= j)
                {
                    dp[i][j] = min(1 + dp[i][j - w[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][s] == INT_MAX - 1)
            return -1;
        else
            return dp[n][s];   
    }
};
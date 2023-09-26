#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[1005][1005] = {-1};

    int lcs(string a, int n, string b, int m)
    {
        if(n == 0 || m == 0) return 0;

        if(dp[n][m] != -1) return dp[n][m];

        if(a[n - 1] == b[m - 1])
        {
            return dp[n][m] = 1 + lcs(a, n - 1, b, m - 1);
        }
        else
        {
            int op1 = lcs(a, n - 1, b, m);
            int op2 = lcs(a, n, b, m - 1);

            return dp[n][m] = max(op1, op2);
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        string a, b;
        a = text1, b = text2;

        int n = a.size();
        int m = b.size();

        int dp[n + 1][m + 1];

        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(a[i - 1] == b[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n][m];
    }
};
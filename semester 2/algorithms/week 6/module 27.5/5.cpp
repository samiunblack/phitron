#include <bits/stdc++.h>
using namespace std;

int minDeletions(string str, int n) { 
    string a;
    a = str;

    string b = a;
    reverse(b.begin(), b.end());

    n = a.size(); 
    int m = b.size();

    int dp[n + 1][m + 1];

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0) dp[i][j] = 0;
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

    return a.size() - dp[n][m];
} 
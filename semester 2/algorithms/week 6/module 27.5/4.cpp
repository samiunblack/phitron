#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestPalinSubseq(string A) {
        string a;
        a = A;
    
        string b = a;
        reverse(b.begin(), b.end());
    
        int n = a.size(), m = b.size();
    
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
    
        int i = n, j = m;
        string ans;
    
        while(i != 0 && j != 0)
        {
            if(a[i - 1] == b[j - 1])
            {
                ans += a[i - 1];
                i--;
                j--;
            }
            else if(dp[i - 1][j] > dp[i][j - 1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
        return ans.size();
    }
};
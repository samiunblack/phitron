#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int n = a.size();
    int m = b.size();

    int dp[n + 1][m + 1];

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
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

    string ans;

    int i = n, j = m;

    while(i >= 1)
    {
        while(j >= 1)
        {
            if(a[i - 1] == b[j - 1])
            {
                ans.push_back(a[i - 1]);
                i--;
                j--;
            }
            else
            {
                int dir = max(dp[i - 1][j], dp[i][j - 1]);
                if(dir == dp[i - 1][j])
                {
                    i--;
                }
                if(dir == dp[i][j - 1])
                {
                    j--;
                }
            }
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans;
}
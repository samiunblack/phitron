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
        for(int j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    int mx = INT_MIN;
    int si, sj;

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
                dp[i][j] = 0;
            }

            mx = max(dp[i][j], mx);

            if(dp[i][j] == mx)
            {
                si = i;
                sj = j;
            }
        }
    }

    int i = si, j = sj;
    string ans;

    while (i != 0 && j != 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            ans += a[i - 1];
            i--;
            j--;
        }
        else
        {
            break;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans;
}
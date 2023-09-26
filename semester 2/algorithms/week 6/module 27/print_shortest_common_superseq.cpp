#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

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

    int i = n;
    int j = m;
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
            ans += a[i - 1];
            i--;
        }
        else
        {
            ans += b[j - 1];
            j--;
        }
    }

    while(j > 0)
    {
        ans.push_back(b[j - 1]);
        j--;
    }

    while(i > 0)
    {
        ans.push_back(a[i - 1]);
        i--;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
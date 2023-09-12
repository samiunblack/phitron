#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int v[n + 1], w[n + 1];

    for(int i = 1; i <= n; i++)
    {
        cin >> w[i];
        cin >> v[i];
    }

    int dp[n + 1][s + 1];

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            dp[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= s; j++)
        {
            if(w[i] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                int op1 = dp[i - 1][j - w[i]] + v[i];
                int op2 = dp[i - 1][j];

                dp[i][j] = max(op1, op2);
            }
        }
    }

    cout << dp[n][s];
}
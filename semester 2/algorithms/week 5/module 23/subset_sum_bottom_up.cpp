#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n + 1];

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int s;
    cin >> s;

    bool dp[n + 1][s + 1];

    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            if(a[i] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i]] || dp[i - 1][j]; 
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    if(dp[n][s]) cout << "YES";
    else cout << "NO";
}
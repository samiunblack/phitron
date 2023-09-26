#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int solve(int n, int s, int a[])
{
    if(n == 0 || s == 0)
    {
        if(s == 0) return 1;
        return 0;
    }

    if(dp[n][s] != -1) return dp[n][s];

    if(a[n - 1] <= s)
    {
        int op1 = solve(n - 1, s - a[n - 1], a);
        int op2 = solve(n - 1, s, a);

        return dp[n][s] = op1 + op2;
    }

    return dp[n][s] = solve(n - 1, s, a);
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    int s = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    int diff;
    cin >> diff;

    int s1 = (diff + s) / 2;

    cout << s1 << endl;

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << solve(n, s1, a);
}
#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

bool solve(int n, int s, int a[])
{
    if(n == 0 || s == 0)
    {
        if(s == 0) return true;
        return false;
    }

    if(dp[n][s] != -1) return dp[n][s];

    if(a[n - 1] <= s)
    {
        int op1 = solve(n - 1, s - a[n - 1], a);
        int op2 = solve(n - 1, s, a);

        return dp[n][s] = op1 || op2;
    }

    return dp[n][s] = solve(n - 1, s, a);
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s;
    cin >> s;

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }

    bool ans = solve(n, s, a);

    if(ans) cout << "YES";
    else cout << "NO";
}
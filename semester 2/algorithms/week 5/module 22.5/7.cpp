#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int dp[N];

long long solve(int n, long long coins[], long long dp[])
{
    if(n <= 0) return 0;

    if(dp[n] != -1) return dp[n];

    long long op1 = solve(n - 2, coins, dp) + coins[n - 1];
    long long op2 = solve(n - 1, coins, dp);

    return dp[n] = max(op1, op2);
}

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        long long coins[n];

        for(int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }

        long long dp[n + 1];

        for(int i = 0; i <= n; i++)
        {
            dp[i] = -1;
        }

        long long ans = solve(n, coins, dp);

        cout << "Case " << i << ": " << ans << endl;
    }
} 
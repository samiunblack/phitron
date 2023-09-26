#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cost[n];

    for(int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    int dp[n];

    dp[0] = 0;
    dp[1] = abs(cost[1] - cost[0]);

    for(int i = 2; i < n; i++)
    {
        dp[i] = min(abs(cost[i] - cost[i - 2]) + dp[i - 2], abs(cost[i] - cost[i - 1]) + dp[i - 1]);
    }

    cout << dp[n - 1];
}
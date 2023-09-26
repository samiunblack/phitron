#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int knapsack(int n, int s, int v[], int w[])
{
    if(n == 0 || s == 0) return 0;

    if(dp[n][s] != -1) return dp[n][s];

    if(w[n - 1] <= s)
    {
        int c1 = knapsack(n - 1, s - w[n - 1], v, w) + v[n - 1];
        int c2 = knapsack(n - 1, s, v, w);

        return dp[n][s] = max(c1, c2);
    }
    else
    {
        return dp[n][s] = knapsack(n - 1, s, v, w);
    }
}

int main()
{
    int n;
    cin >> n;

    int v[n];
    int w[n];

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> w[i];
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

    cout << knapsack(n, s, v, w);
}
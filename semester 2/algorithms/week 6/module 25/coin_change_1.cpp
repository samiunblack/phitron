#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int knapsack_count(int n, int coin[], int s)
{
    if(n == 0 || s == 0)
    {
        if(s == 0) return 1;
        else return 0;
    }

    if(dp[n][s] != -1) return dp[n][s];

    if(coin[n - 1] <= s)
    {
        int op1 = knapsack_count(n, coin, s - coin[n - 1]);
        int op2 = knapsack_count(n - 1, coin, s);

        return dp[n][s] = op1 + op2;
    }

    else
    {
        return dp[n][s] = knapsack_count(n - 1, coin, s);
    }
}

int main()
{
    int n;
    
    cin >> n;

    int coin[n];

    for(int i = 0; i < n; i++)
    {
        cin >> coin[i];
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

    cout << knapsack_count(n, coin, s);
}
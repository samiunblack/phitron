#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

int dp[N][N];

int solve(int l, int cost[], int w)
{
    if(l == 0) return 0;

    if(dp[l][w] != -1) return dp[l][w];

    if(l <= w)
    {
        int op1 = solve(l, cost, w - l) + cost[l - 1];
        int op2 = solve(l - 1, cost, w);

        return dp[l][w] = max(op1, op2);
    }
    else
    {
        return dp[l][w] = solve(l - 1, cost, w);
    }
    
}

int main()
{
    int l;
    cin >> l;

    int cost[l];

    for(int i = 0; i < l; i++)
    {
        cin >> cost[i];
    }

    int w = l;

    for(int i = 0; i <= l; i++)
    {
        for(int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << solve(l, cost, w);
}
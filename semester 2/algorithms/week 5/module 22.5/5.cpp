#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int solve(vector<int>& cost, int n)
{
    if(n <= 0)
    {
        return 0;
    }

    if(dp[n] != -1) return dp[n];

    int op1 = solve(cost, n - 1) + cost[n - 1];
    int op2 = solve(cost, n - 2) + cost[n - 1];

    return dp[n] = min(op1, op2);
}

int main()
{
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};

    for(int i = 0; i <= cost.size(); i++)
    {
        dp[i] = -1;
    }

    cout << min(solve(cost, cost.size() - 1), solve(cost, cost.size()));
}
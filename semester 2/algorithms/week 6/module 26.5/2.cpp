#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int dp[1005][1005];
    
    void reset()
    {
        for(int i = 0; i < 1005; i++)
        {
            for(int j = 0; j < 1005; j++) dp[i][j] = -1;
        }
    }
    
    long long solve(int N, int W, int val[], int wt[])
    {
        if(N == 0 || W == 0) return 0;
        
        if(dp[N][W] != -1) return dp[N][W];
        
        if(wt[N - 1] <= W)
        {
            long long op1 = (long long) solve(N, W - wt[N - 1], val, wt) + val[N - 1];
            long long op2 = (long long) solve(N - 1, W, val, wt);
            
            return dp[N][W] = max(op1, op2);
        }
        
        else
        {
            return dp[N][W] = solve(N - 1, W, val, wt);
        }
    }
    
    int knapSack(int N, int W, int val[], int wt[])
    {
        for(int i = 0; i <= N; i++)
        {
            for(int j = 0; j <= W; j++) dp[i][j] = -1;
        }
        
        solve(N, W, val, wt);
    }
};
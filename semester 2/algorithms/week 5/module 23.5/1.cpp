#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int dp[1005][1005];
    
    bool solve(int n, int s, vector<int>& arr)
    {
        if(n == 0 || s == 0)
        {
            if(s == 0) return true;
            return false;
        }
        
        if(dp[n][s] != -1) return dp[n][s];
            
        if(arr[n - 1] <= s)
        {
            bool op1 = solve(n - 1, s - arr[n - 1], arr);
            bool op2 = solve(n - 1, s, arr);
            
            return dp[n][s] = op1 || op2;
        }
        else return dp[n][s] = solve(n - 1, s, arr);
    }

    bool isSubsetSum(vector<int>arr, int sum){
        for(int i = 0; i <= arr.size(); i++)
        {
            for(int j = 0; j <= sum; j++)
            {
                dp[i][j] = -1;
            }
        }
        
        return solve(arr.size(), sum, arr);
    }
};
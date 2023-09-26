#include <bits/stdc++.h>
using namespace std;



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

    int dp[n + 1][s + 1];
    
    dp[0][0] = true;
    for(int i = 1; i <= s; i++) dp[0][i] = false;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            if(a[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    vector<int> subset;
    int mn = INT_MAX;

    for(int i = 0; i <= s; i++)
    {
        if(dp[n][i] != 0) subset.push_back(i);
    }

    for(int val : subset)
    {
        int s1 = val;
        int s2 = s - s1;

        mn = min(mn, abs(s1 - s2));
    }

    cout << mn;
}
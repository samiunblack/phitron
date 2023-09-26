#include <bits/stdc++.h>
using namespace std;

int a[12][12];

int solve(int n, int m)
{
    if(n == 0 && m == 0)
    {
        return a[0][0];
    }

    int maxSum = INT_MIN;

    if(n > 0)
    {
        maxSum = max(maxSum, solve(n - 1, m));
    }
    
    if(m > 0)
    {
        maxSum = max(maxSum, solve(n, m - 1));
    }
    

    return maxSum + a[n][m];
}

int main()
{
    int n, m;
    cin >> n >> m;

    

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << solve(n - 1, m - 1);
}
#include <bits/stdc++.h>
using namespace std;

const int N =  1e9 + 7;
int dp[1005][1005];

int solver(int i, int k, int n, vector<int>& arr)
{

    if (k < 0) return 0;
    if (i == n)
    {
        if (k == 0)return 1;
        return 0;
    }

    if(dp[i][k] != -1) return dp[i][k];

    int ans = solver(i, k - arr[i], n, arr);
    ans += solver(i + 1, k, n, arr);

    return dp[i][k] = ans % N;
}

int solve(vector<int>& arr, int k)
{

    int n = arr.size();
    return solver(0, k, n, arr);
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 1000 - m;

        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= sum; j++)
            {
                dp[i][j] = -1;
            }
        }

        cout << solve(a, sum);

        cout << endl;
    }
}
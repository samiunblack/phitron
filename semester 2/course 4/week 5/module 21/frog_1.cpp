#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int dp[N];

int solve(int a[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    if(dp[n] != -1) return dp[n];
    if(n == 2) return dp[n] = abs(a[2] - a[1]);
    else
    {
        int choice1 = solve(a, n - 1) + abs(a[n] - a[n - 1]);
        int choice2 = solve(a, n - 2) + abs(a[n] - a[n - 2]);

        return dp[n] = min(choice1, choice2);
    }
    
    
}

int main()
{
    int n;
    cin >> n;

    int arr[n + 1];

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        dp[i] = -1;
    }

    cout << solve(arr, n);
}
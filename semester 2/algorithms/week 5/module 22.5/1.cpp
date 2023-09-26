#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int dp[N][N];

int knapsack(int n, int s, int w[], int v[])
{
    if(n == 0 || s == 0) return 0;
    
    if(dp[n][s] != -1) return dp[n][s];

    if(w[n - 1] <= s)
    {
        int c1 = knapsack(n - 1, s - w[n - 1], w, v) + v[n - 1];
        int c2 = knapsack(n - 1, s, w, v);

        return dp[n][s] = max(c1, c2);
    }
    else
    {
        return dp[n][s] = knapsack(n - 1, s, w, v);
    }
}


int main()
{
    int N, W;
    cin >> N >> W;

    int v[N];
    int w[N];

    for(int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    for(int i = 0; i <= N; i++)
    {
        for(int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    } 

    cout << knapsack(N, W, w, v);

}
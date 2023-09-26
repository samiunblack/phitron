#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

long long dp[N];

void reset()
{
    for(int i = 0; i < N; i++)
    {
        dp[i] = (long long)-1;
    }
}

int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return dp[n];
    }
    
    if(dp[n] != -1) return dp[n];

    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}

int main()
{
    reset();
    dp[0] = 1;
    dp[1] = 1;

    int n = 5;
    cout << fib(n) << endl;
}
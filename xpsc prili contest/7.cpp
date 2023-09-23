#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;

int solve(int n, int d, vector<int>& a) {
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += a[i];
    }

    if(d > s || (d + s) % 2 != 0) return 0;

    s = (s + d) / 2;
    int dp[n + 1][s + 1] = {0};

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j <= s; j++) 
        {
            dp[i][j] = dp[i - 1][j];
            if (a[i - 1] <= j) dp[i][j] = (dp[i][j] + dp[i - 1][j - a[i - 1]]) % N;
        }
    }

    return dp[n][s];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(n, d, a) << endl;
    }
}
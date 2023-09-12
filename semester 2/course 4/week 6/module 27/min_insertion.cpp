#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int lcs(int n, string a, int m, string b)
{
    if(n == 0 || m == 0) return 0;

    if(dp[n][m] != -1) return dp[n][m];

    if(a[n - 1] == b[m - 1])
    {
        return dp[n][m] = lcs(n - 1, a, m - 1, b) + 1;
    }

    else
    {
        int op1 = lcs(n - 1, a, m, b);
        int op2 = lcs(n, a, m - 1, b);

        return dp[n][m] = max(op1, op2);
    }
}

int main()
{
    string a, b;
    cin >> a >> b;

    for(int i = 0; i <= a.size(); i++)
    {
        for(int j = 0; j <= b.size(); j++)
        {
            dp[i][j] = -1;
        }
    }

    int seq = lcs(a.size(), a, b.size(), b);

    int d = a.size() - seq;
    int i = b.size() - seq;

    cout << "Deletion : " << d << endl;
    cout << "Insertion : " << i << endl;
}
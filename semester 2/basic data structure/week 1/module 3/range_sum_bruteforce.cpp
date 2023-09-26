#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    long long arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        long long sum = 0;

        for(int i = l; i <= r; i++)
        {
            sum += arr[i];
        }

        cout << sum << endl;
    }
}
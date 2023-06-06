#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;

    vector<long long> a(n);
    
    vector<long long> prefix(n, 0);

    for(long long i = 0; i < n; i++)
    {
        cin >> a[i];
        prefix[i] = a[i] + prefix[(i > 0) ? i - 1 : i];
    }

    for(long long i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;

        long long left_sum = (l > 0) ? prefix[l - 1] : 0;
        long long right_sum = prefix[r];

        cout << right_sum - left_sum << endl;
    }
}
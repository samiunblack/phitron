#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    long long prefix[n];

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(i == 0) prefix[i] = a;
        else prefix[i] = prefix[i - 1] + a;
    }

    while(q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        long long left_sum = (l > 0) ? prefix[l - 1] : 0;
        long long right_sum = prefix[r];

        cout << right_sum - left_sum << endl;     
    }
}
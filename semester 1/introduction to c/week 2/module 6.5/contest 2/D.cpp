#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long l, r;
        cin >> l >> r;

        long long num = abs(l - r);

        //1 to r = (r * (r + 1)) / 2
        //1 to l = (l * (l + 1)) / 2

        if(l > r)
        {
            swap(l, r);
        }

        long long sum = (r * (r + 1)) / 2;
        long long diff = (l * (l + 1))/2;
        long long total = (sum - diff) + l;

        cout << total << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  n, k;
    cin >> n >> k;

    int min = INT_MAX;

    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        if(a < min)
        {
            min = a;
        }

        if(i % k == 0)
        {
            cout << min << " ";
            min =INT_MAX;
        }

    }

    if(n % k != 0)
    {
        cout << min;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long prefix[n];

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(i == 0) prefix[i] = a;
        else prefix[i] = prefix[i - 1] + a;
    }


    reverse(prefix, prefix + n);

    for(int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
}
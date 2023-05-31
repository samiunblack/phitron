#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> x >> n;

    long long sum = 0;
    sum += (pow(x, 0) - 1);
    for(int i = 2; i <= n; i+= 2)
    {
        sum += pow(x, i);
    }

    cout << sum;
}
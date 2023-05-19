#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, a;
    cin >> n >> k >> a;

    long long mult = n * k;
    long long div = mult / a;

    if(mult % a != 0)
    {
        cout << "double";
    }
    else if(div >= INT_MIN && div <= INT_MAX)
    {
        cout << "int";
    }
    else
    {
        cout << "long long";
    }
}
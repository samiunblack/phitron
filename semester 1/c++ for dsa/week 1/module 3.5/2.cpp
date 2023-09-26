#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, e;
    char c, d;

    cin >> a >> c >> b >> d >> e;

    if(c == '+')
    {
        (a + b) == e ? cout << "Yes" : cout << "No";
    }

    else if(c == '-')
    {
        (a - b) == e ? cout << "Yes" : cout << "No";
    }

    else if(c == '*')
    {
        ((a * b) == e) ? cout << "Yes" : cout << "No";
    }
}
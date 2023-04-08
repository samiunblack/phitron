#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a, b, c, d;
    cin >> a >> b >> c >> d;

    long mult = (a % 10) * (b % 10) * (c % 10) * (d % 10);

    long reminder = mult % 100;

    if(reminder == 0)
    {
        cout << "00";
    }
    else {
        cout << reminder;
    }
}
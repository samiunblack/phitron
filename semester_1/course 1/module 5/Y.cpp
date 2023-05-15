#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a, b, c, d;
    cin >> a >> b >> c >> d;

    long mult = (a % 100) * (b % 100) * (c % 100) * (d % 100);

    long reminder = mult % 100;

    if(reminder == 0)
    {
        cout << "00";
    }
    else {
        if(reminder / 10 == 0)
        {
            cout << "0" << reminder;
        }
        else {
            cout << reminder;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;


    int diff = abs(a - b);

    if(a == 0 || b == 0)
    {
        cout << "NO";
    }

    else if(diff >= 2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
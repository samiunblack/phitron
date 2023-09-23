#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if(a == b && b == c && a == c && a != 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

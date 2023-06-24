#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin >> a;

    if(a >= 'A' && a <= 'z')
    {
        cout << "ALPHA\n";
        if(a >= 'A' && a <= 'Z')
        {
            cout << "IS CAPITAL";
        }

        if(a >= 'a' && a <= 'z')
        {
            cout << "IS SMALL";
        }
    }
    else
    {
        cout << "IS DIGIT";
    }
}
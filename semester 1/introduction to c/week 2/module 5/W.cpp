#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if(s == '+')
    {
        if(a + b == c)
        {
            printf("Yes");
        }
        else
        {
            cout << a + b;
        }
    }
    else if(s == '-')
    {
        if(a - b == c)
        {
            printf("Yes");
        }
        else
        {
            cout << a - b;
        }
    }
    else
    {
        if(a * b == c)
        {
            printf("Yes");
        }
        else
        {
            cout << a * b;
        }
    }
}

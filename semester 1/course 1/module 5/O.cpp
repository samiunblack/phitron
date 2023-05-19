#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a, b;
    char op;
    cin >> a >> op >> b;

    if(op == '+')
    {
        cout << a + b;
    }
    else if(op == '-')
    {
        cout << a - b;
    }
    else if(op == '*')
    {
        cout << a * b;
    }
    else
    {
        cout << a / b;
    }
}
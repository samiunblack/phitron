#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    if(x == 0 && y == 0)
    {
        cout << "Origem";
    }
    else if(x == 0)
    {
        cout << "Eixo Y";
    }
    else if(y == 0)
    {
        cout << "Eixo X";
    }

    else {
        if(x > 0 && y > 0)
        {
            cout << "Q1";
        }
        else if(x > 0 && y < 0)
        {
            cout << "Q4";
        }
        else if(x < 0 && y > 0)
        {
            cout << "Q2";
        }
        else {
            cout << "Q3";
        }
    }
}
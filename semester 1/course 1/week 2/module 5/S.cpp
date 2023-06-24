#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    cin >> x;

    if(x < 0 || x > 100)
    {
        cout << "Out of Intervals";
    }
    else {
        if(x <= 25)
        {
            cout << "Interval [0,25]";
        }
        else if(x <= 50)
        {
            cout << "Interval (25,50]";
        }
        else if(x <= 75)
        {
            cout << "Interval (50,75]";
        }
        else {
            cout << "Interval (75,100]";
        }
    }
}
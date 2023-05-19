#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    
    cin >> a >> b >> c >> d;

    double log_a = log10(a);
    double log_c = log10(c);

    
    if(log_a > log_c)
    {
        if(b < d)
        {
            double log_ratio = log_a / log_c;
            double exp_ratio = d / (b * 1.0);

            if(log_ratio > exp_ratio)
            {
                cout << "YES";
            }
            else 
            {
                cout << "NO";
            }
        }
        else 
        {
            cout << "YES";
        }
    }
    else if(log_a < log_c)
    {
        if(b > d)
        {
            double log_ratio = log_a / log_c;
            double exp_ratio = (b * 1.0) / d;

            if(log_ratio < exp_ratio)
            {
                cout << "YES";
            }
            else 
            {
                cout << "NO";
            }
        }
        else 
        {
            cout << "NO";
        }
    }
    else
    {
        if(a == 1 && c == 1)
        {
            cout << "NO";
        }
        else if(b > d)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
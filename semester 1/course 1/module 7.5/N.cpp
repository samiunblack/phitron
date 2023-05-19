#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string s;
    cin >> a >> b;
    cin >> s;

    bool found = true;

    if(s.size() < a || s[a] != '-')
    {
        found = false;
    }

    else if(s.size() > a + b + 1 || s.size() < a + b + 1)
    {
        found = false;
    }

    else {
        for(int i = 0; i < a; i++)
        {
            if(s[i] < 48 || s[i] > 57)
            {
                found = false;
                break;
            }    
        }

        for(int i = a + 1; i <= a + b; i++)
        {
            if(s[i] < 48 || s[i] > 57)
            {
                found = false;
                break;
            }    
        }
    }

    if(found)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
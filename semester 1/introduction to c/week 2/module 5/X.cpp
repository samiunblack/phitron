#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if(r1 < l2 || r2 < l1)
    {
        cout << -1;
    }
    else {
        if(l1 >= l2)
        {
            cout << l1;
        }
        else 
        {
            cout << l2;
        }
        
        cout << " ";

        if(r1 >= r2)
        {
            cout << r2;
        }
        else
        {
            cout << r1;
        }
    }
}
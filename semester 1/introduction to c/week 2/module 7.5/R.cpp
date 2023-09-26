#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int b[n];

    int i = 0;
    while(i < n)
    {
        cin >> a[i];
        i++;
    }

    i = 0;
    while(i < n)
    {
        cin >> b[i];
        i++;   
    }

    sort(a, a + n);
    sort(b, b + n);

    bool perm = true;

    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            perm = false;
            break;
        }       
    }

    if(perm)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
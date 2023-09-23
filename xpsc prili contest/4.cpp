#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << i;
    }

    cout << endl;

    for(int i = 2; i <= n - 1; i++)
    {
        cout << i;
        for(int j = 0; j < n - 2; j++)
        {
            cout << " ";
        }

        cout << n;
        cout << endl;
    }

    if(n != 1)
    {
        for(int i = 0; i < n; i++)
        {
            cout << n;
        }
    }
    
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int j = 3;
    int m = 1;

    for(int i = 0; i < n; i++)
    {
        for(int k = m; k <= j; k++)
        {
            cout << k << " ";
        }
        
        m = j + 2;
        j+= 4;
        cout << "PUM\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int j = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int l = 0; l < n - i; l++)
        {
            cout << " ";
        }

        for(int k = 0; k < j; k++)
        {
            cout << "*";
        }
        cout << "\n";

        j += 2;
    }
}
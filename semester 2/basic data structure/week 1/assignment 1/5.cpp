#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if (i == j && i == ((n / 2) + 1))
            {
                cout << "X";
            }
            else if(i == j)
            {
                cout << "\\";
            }
            else if(j == n - (i - 1))
            {
                cout << "/";
            }
            else 
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}
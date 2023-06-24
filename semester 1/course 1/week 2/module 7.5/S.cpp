#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x;
    cin >> x;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == x)
            {
                found = true;
                break;
            }
        }
    }

    if(found)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }
}
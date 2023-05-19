#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int count = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[0] == arr[i])
        {
            count++;
        }
    }

    if(count % 2 == 1)
    {
        cout << "Lucky";
    }
    else 
    {
        cout << "Unlucky";
    }
}
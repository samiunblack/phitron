#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int i = 0;
    int count = 0;
    int can = true;
    while(i < n)
    {
        cin >> arr[i];
        if(arr[i] % 2 != 0)
        {
            can = false;
        }
        i++;
    }

    while(can != false)
    {
        count++;
        for(int i = 0; i < n; i++)
        {
            arr[i] /= 2;
            if(arr[i] % 2 == 1)
            {
                can = false;
            }
        }
    }

    cout << count;
}
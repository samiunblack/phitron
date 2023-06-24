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

    int first = 0;
    int last = n - 1;

    int middle = n / 2;

    bool pal = true;

    for(int i = 0; i < middle; i++)
    {
        if(arr[first] != arr[last])
        {
            pal = false;
            break;
        }
        else {
            first++;
            last--;
        }
    }

    if(pal)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
}
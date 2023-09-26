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

    int i = 0;
    int j = n - 1;

    bool flag = true;
    while(i < j)
    {
        if(arr[i] != arr[j])
        {
            flag = false;
        }
        i++;
        j--;
    }

    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
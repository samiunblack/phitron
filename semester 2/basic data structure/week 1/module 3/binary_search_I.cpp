#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = n - 1;

    bool flag = false;

    while(l <= r)
    {
        int mid = (l + r)/2;

        if(arr[mid] == q)
        {
            flag = true;
            break;
        }
        else if(arr[mid] > q)
        {
            r = mid - 1;
        }
        else if(arr[mid] < q)
        {
            l = mid + 1;
        }
    }

    if(flag) cout << "FOUND";
    else cout << "NOT FOUND";
}
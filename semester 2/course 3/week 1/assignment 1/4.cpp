#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    int x;

    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> m;
    vector<int> arr2(m);

    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cin >> x;

    arr.insert(arr.begin() + x, arr2.begin(), arr2.end());

    for(int x : arr)
    {
        cout << x << " ";
    }
}
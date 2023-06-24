#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) // O(n)
    {
        cin >> arr[i];
    }

    int s = 0;
    for(int i = 0; i < n; i++) // O(n)
    {
        s += arr[i];
    }

    cout << s;

    // O(n)
    //max = 10^7
}
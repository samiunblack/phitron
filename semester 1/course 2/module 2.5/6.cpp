#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_n = INT_MIN;
    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        max_n = max(a, max_n); 
    }

    cout << max_n;
}
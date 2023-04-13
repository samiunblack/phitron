#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        cout << "0";
    }
    else if(n == 2)
    {
        cout << "1";
    }
    else {
        long long arr[n] = {0, 1};
        
        for(int i = 2; i < n; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }

        cout << arr[n - 1];
    }
}
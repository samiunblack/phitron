#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for(int i = n; i >= 1; i /= 2) // O(logN)
    {
        count++;
    }

    cout << count;

    //max = 10^18
}
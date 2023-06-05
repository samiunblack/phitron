#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < sqrt(n); i++)
    {
        cout << i << endl;
    }

    for(int i = 0; i * i < n; i++)
    {
        cout << i << endl;
    }

    //max = 10^14
}
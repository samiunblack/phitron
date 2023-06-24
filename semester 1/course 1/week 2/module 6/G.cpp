#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;

        long long factorial = 1;

        for(long long i = 1; i <= a; i++)
        {
            factorial *= i;
        }

        cout << factorial << "\n";
    }
}
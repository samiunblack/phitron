#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    if(a > b)
    {
        swap(a, b);
    }

    int total = 0;

    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        int j = i;

        while(j != 0)
        {
            sum += j % 10;
            j /= 10;
        }

        if(sum >= a && sum <= b)
        {
            total += i;
        }
    }

    cout << total;
}
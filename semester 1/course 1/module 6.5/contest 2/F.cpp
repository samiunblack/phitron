#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = 0;

    for(int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        
        int current = 0;
        while(a % 2 == 0)
        {
            current++;
            a /= 2;
        }

        if(current > max)
        {
            max = current;
        }
    }

    cout << max;
}
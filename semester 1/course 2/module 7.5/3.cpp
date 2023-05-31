#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int even = 0;
        int odd = 0;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if(a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(n % 2 != 0)
        {
            cout << "-1" << endl;
        }

        else if(even == odd)
        {
            cout << "0" << endl;
        }

        else
        {
            int half = n / 2;
            cout << abs(half - odd) << endl;
        }
    }
}
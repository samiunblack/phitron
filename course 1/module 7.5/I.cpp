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

        long long arr[n];

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }


        long long min = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                long long eqn = arr[i] + arr[j] + j - i;

                if(eqn < min)
                {
                    min = eqn;
                }
            }
        }

        cout << min << "\n";
    }
}
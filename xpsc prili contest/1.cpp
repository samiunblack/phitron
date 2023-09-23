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

        int h[n];

        int mx = INT_MIN;
        int sm = INT_MIN;
        int mi = -1;
        int si = -1;

        for(int i = 0; i < n; i++)
        {
            cin >> h[i];
            if(h[i] > mx)
            {
                mx = h[i];
                mi = i;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(h[i] > sm && h[i] != mx)
            {
                sm = h[i];
                si = i;
            }
        }

        int l = mi, r = si;

        if(l <= r)
        {
            cout << l << " " << r << endl;
        }
        else
        {
            cout << r << " " << l << endl;
        }
    }   
}
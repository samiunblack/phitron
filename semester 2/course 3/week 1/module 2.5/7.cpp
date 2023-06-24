#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    for(int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        int flag = 0;

        int l = 0;
        int r = n - 1;

        while(l <= r)
        {
            
            int half = (l + r) / 2;

            if(a > v[half])
            {
                l = half + 1;
            }

            else if(a < v[half])
            {
                r = half - 1;
            }

            else
            {
                flag = 1;
                break;
            }
        }

        if(flag) cout << "found" << endl;
        else cout << "not found" << endl;
    }
}
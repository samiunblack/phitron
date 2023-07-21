#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    int t;
    cin >> t;

    while(t--)
    {
        map<int, int> arr;

        int n;

        cin >> n;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[a]++;
        }

        int max = INT_MIN;

        for(auto it = arr.begin(); it != arr.end(); it++)
        {
            if(it->second > max)
            {
                max = it->second;
            }
        }
        
        int max_n = INT_MIN;

        for(auto it = arr.begin(); it != arr.end(); it++)
        {
            if(it->second == max)
            {
                if(it->first > max_n) max_n = it->first;
            }
        }

        cout << max_n << " " << max << endl;
    }


}
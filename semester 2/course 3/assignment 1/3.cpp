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

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> arr2(arr);
        
        sort(arr.begin(), arr.end());

        int flag = 1;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] != arr2[i])
            {
                flag = 0;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++)
    {
        int value = arr[i];

        int l = i + 1;
        int r = n - 1;

        while(l <= r)
        {
            int half = (l + r)/2;

            if(value == arr[half])
            {
                flag = 1;
                break;
            }

            else if(value > arr[half])
            {
                l = half + 1;
            }
            else if(value < arr[half])
            {
                r = half - 1;
            }
        }

        if(flag) break;
    }

    if(flag) cout << "YES";
    else cout << "NO";
}

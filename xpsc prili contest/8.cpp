#include <bits/stdc++.h>
using namespace std;

int mn = INT_MAX;

void subsolve(int arr[], int n, int k, int i, vector<int>& sub, int ms) {

    if (sub.size() == k) {
        int sum = 0;

        for (int num : sub) {
            sum += num;
        }

        int s2 = ms - sum;
        
        mn = min(mn, abs(sum - s2));
        
        return;
    }

    if (i >= n || sub.size() + (n - i) < k) return;

    sub.push_back(arr[i]);
    subsolve(arr, n, k, i + 1, sub, ms);

    sub.pop_back();
    subsolve(arr, n, k, i + 1, sub, ms);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        int ms = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            ms += a[i];
        }

        int f = n / 2;
        vector<int> v;

        mn = INT_MAX;
        
        subsolve(a, n, f, 0, v, ms);
        
        cout << mn << endl;
    }
}
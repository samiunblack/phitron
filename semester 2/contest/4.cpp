#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;

   while(t--)
   {
        int n;
        cin >> n;

        int arr[n];
        set<int> s;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
            s.insert(a);
        }

        cout << n - s.size() << endl;
   }
}
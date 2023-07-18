#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    
    int n;
    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;

        s.insert(a);
    }

    if(s.count(10)) cout << "YES" << endl;
    else cout << "NO" << endl;

    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
}
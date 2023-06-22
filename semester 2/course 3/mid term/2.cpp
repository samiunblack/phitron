#include <bits/stdc++.h>

using namespace std;


int main()
{
    list<int> l;

    int a;
    while(true)
    {
        cin >> a;
        if(a == -1) break;

        l.push_back(a);
    }

    l.sort();
    l.unique();

    for(auto x: l)
    {
        cout << x << " ";
    }
}

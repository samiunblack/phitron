#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};


    v.insert(v.begin() + 2, 45);

    for(int x : v)
    {
        cout << x << " ";
    }
    cout << endl;


    vector<int> x = {100, 200, 300};

    v.insert(v.begin() + 1, x.begin(), x.end());

    for(int x: v)
    {
        cout << x << " ";
    }
}
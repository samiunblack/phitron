#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 20, 20};

    replace(v.begin(), v.end(), 20, 2);

    for(int x : v)
    {
        cout << x << " ";
    }
}
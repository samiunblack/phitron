#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 20, 20};

    auto it = find(v.begin(), v.end(), 20);

    if(it == v.end())
    {
        cout << "NOT FOUND";
    }
    else
    {
        cout << "FOUND";
    }
}
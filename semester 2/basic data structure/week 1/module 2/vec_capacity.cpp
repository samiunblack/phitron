#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5, 0);
    cout << v.size() << endl;

    cout << v.empty() << endl;

    v.resize(7, 100);
    cout << v.size() << endl;
}
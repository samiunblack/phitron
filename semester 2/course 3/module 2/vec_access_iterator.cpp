#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    cout << v.back() << endl;
    cout << v.front() << endl;


    for(auto it = v.begin() ; it < v.end(); it++)
    {
        cout << *it << " ";
    }
}
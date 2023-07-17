#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};

    int val;
    cin >> val;

    v.push_back(val);
    
    int curr = v.size() - 1;
    int parent = (curr - 1) / 2;
    

    while(v[curr] > v[parent] && curr != 0)
    {
        swap(v[curr], v[parent]);
        curr = parent;
        parent = (curr - 1) / 2;
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
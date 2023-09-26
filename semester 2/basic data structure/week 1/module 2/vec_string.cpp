#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v(n);
    cin.ignore();
    
    for(int i = 0; i < v.size(); i++)
    {
        getline(cin, v[i]);
    }

    for(string x : v)
    {
        cout << x << endl;
    }
}
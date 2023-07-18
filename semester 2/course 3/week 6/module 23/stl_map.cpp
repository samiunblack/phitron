#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp.insert({"rahim", 1});
    mp.insert({"karim", 1});
    mp.insert({"maria", 1});

    mp["rahat"] = 30;
    mp["farhan"] = 40;

    for(auto it=mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    if(mp.count("akib"))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
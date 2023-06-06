#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    vector<int> v(26, 0);

    for(int i = 0; i < a.size(); i++)
    {     
        v[a[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(v[i] != 0)
        {
            char c = i + 'a';
            cout <<  c << " : " << v[i] << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        string x;
        cin >> x;

        int t = s.find(x);
        while(t != -1)
        {
            s.replace(t, x.size(), "$");
            t = s.find(x);
        }

        cout << s << endl;
    }
}
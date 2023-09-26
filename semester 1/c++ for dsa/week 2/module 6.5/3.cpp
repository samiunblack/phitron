#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string a = "EGYPT";

    int t = s.find(a);
    while(t != -1)
    {
        s.replace(t, 5, " ");
        t = s.find(a);
    }

    cout << s;
}
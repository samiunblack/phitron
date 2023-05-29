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

        int sum_first = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int sum_last = s[5] - '0' + s[4] - '0' + s[3] - '0';

        if(sum_first == sum_last)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
}
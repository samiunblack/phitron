#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    long long sum = 0;

    for(int i = 0; i < s.size(); i++)
    {
        sum += int(s[i] - '0');
    }

    cout << sum;
}
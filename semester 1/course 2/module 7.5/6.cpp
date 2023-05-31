#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string x;

    getline(cin, s);
    cin >> x;

    stringstream ss(s);
    string word;

    int count = 0;

    while(ss >> word)
    {
        if(word == x)
        {
            count++;
        }
    }

    cout << count;
}
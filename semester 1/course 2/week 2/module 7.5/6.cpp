#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin, s);
    string x;
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
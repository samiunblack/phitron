#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    string sr;

    while(ss >> word)
    {
        reverse(word.begin(), word.end());
        sr += word;
        sr += " ";
    }

    sr.pop_back();

    cout << sr;
}
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
        int j = 0;
        int i = word.size() - 1;
        while(j < i)
        {
            swap(word[i], word[j]);
            j++;
            i--;
        }

        sr += word;
        sr += " ";
    }

    sr.pop_back();

    cout << sr;
}
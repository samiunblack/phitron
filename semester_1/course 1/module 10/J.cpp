#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> charmap;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(charmap.find(s[i]) != charmap.end())
        {
            charmap[s[i]]+= 1;
        }
        else {
            charmap[s[i]] = 1;
        }
    }

    for(auto x: charmap) 
    {
        cout << x.first << " " << ":" << " " << x.second << "\n";
    }   
    
    return 0;
}
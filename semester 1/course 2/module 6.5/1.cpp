#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int count = 1;

    for(int i = 1; i < s.size() - 1; i++)
    {

        if(!isalpha(s[i]) && isalpha(s[i + 1]))
        {
            count++;
        }
    }

    cout << count;
}
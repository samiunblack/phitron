#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n % 2 == 0)
    {
        int j = 0;
        for(int i = 0; i < n / 2; i++)
        {
            cout << s[j] << s[j + 1];
            j += 2;

            if(i != (n / 2 - 1)) cout << "-";
        }
        
    }
    else
    {
        
        cout << s[0] << s[1] << s[2];
        if(n > 3)  cout << "-";
        int j = 3;
        for(int i = 0; i < (n - 3) / 2; i++)
        {
            cout << s[j] << s[j + 1];
            j += 2;

            if(i != ((n - 3) / 2) - 1) cout << "-";
        }
    }
}
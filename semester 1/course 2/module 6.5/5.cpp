#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int balloon = 0;

        int probs[26] = {0};

        for(int i = 0; i < s.size(); i++)
        {
            if(probs[s[i] - 'A'] == 0)
            {
                balloon += 2;
                probs[s[i] - 'A'] = 1;
            }
            else
            {
                balloon += 1;
            }
        }

        cout << balloon << endl;
    }
}
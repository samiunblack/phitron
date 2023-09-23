#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<string> v;
        string str;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                if(i + 1 < s.size() && s[i + 1] == '1')
                str.push_back(s[i]);

                else if(i == s.size() - 1 && s[i - 1] == '1')
                {
                    str.push_back(s[i]);
                }
                else if(i + 1 < s.size() && s[i + 1] == '0')
                {
                   str.push_back(s[i]); 
                   v.push_back(str);
                   str = "";
                }
                else
                {
                    str.push_back(s[i]);
                    v.push_back(str);
                    str = "";
                }
                
            }
            else
            {
                str = "";
            }
            
        }
        if(str.size()) v.push_back(str);

        sort(v.begin(), v.end(), greater<string>());

        int z = 0;
        int k = 0;

        for(int i = 0; i < v.size(); i+=2)
        {
            z += v[i].size();
        }

        cout << z << endl;
    }
}
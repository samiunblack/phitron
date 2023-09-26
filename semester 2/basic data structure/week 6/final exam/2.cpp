#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string sentence;
        
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);

        map<string, int> mp;

        while(ss >> word)
        {
            mp[word]++;
        }  

        int max = INT_MIN;
        string str;  

        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > max)
            {
                max = it->second;
                
            }
        }  

        stringstream st(sentence);

        string w;
        map<string, int> m;

        while(st >> w)
        {
            m[w]++;

            if(m[w] == max)
            {
                cout << w << " " << max << endl;
                break;
            }
        }
    }


}
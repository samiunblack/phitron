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

        priority_queue<int> pq;
        
        string str;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                if(i + 1 < s.size() && s[i + 1] == '1')
                str.push_back(s[i]);

                else if(i + 1 < s.size() && s[i + 1] == '0')
                {
                   str.push_back(s[i]); 
                   pq.push(str.size());
                   str = "";
                }
                else
                {
                    str.push_back(s[i]);
                    pq.push(str.size());
                    str = "";
                }
                
            }
            else
            {
                str = "";
            }
            
        }
        if(str.size()) 
        {
            pq.push(str.size());
        }

        int z = 0;
        int k = 0;

        while(!pq.empty())
        {
            z += pq.top();
            pq.pop();
            if(!pq.empty()) pq.pop();
        }

        cout << z << endl;
    }
}
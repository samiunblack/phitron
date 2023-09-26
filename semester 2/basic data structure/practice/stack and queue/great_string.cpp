#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++)
        {
            if(st.empty()) st.push(s[i]);
            else
            {
                if(isupper(st.top()) && s[i] == tolower(st.top()))
                {
                    st.pop();
                } 
                else if(islower(st.top()) && s[i] == toupper(st.top()))
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }

        string ans;

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }    

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
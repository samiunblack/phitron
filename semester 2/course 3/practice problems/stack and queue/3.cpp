#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        if(s.size() >= 2)
        {
            for(int i = 0; i < s.size(); i++)
            {
                if(!st.empty())
                {
                    if(islower(s[i]))
                    {
                        if(st.top() == toupper(s[i]))
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push(s[i]);
                        }
                    }
                    else if(isupper(s[i]))
                    {
                        if(st.top() == tolower(s[i]))
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push(s[i]);
                        }
                    }
                }
                else
                {
                    st.push(s[i]);
                }
            }

            string ans = "";

            while(!st.empty())
            {
                ans.push_back(st.top());
                st.pop();
            }

            reverse(ans.begin(), ans.end());

            return ans;
        }

        return s;    
    }
};
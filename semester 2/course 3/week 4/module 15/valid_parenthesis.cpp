#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool isValid(string s)
        {
            stack<int> st;

            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                {
                    st.push(s[i]);
                }
                else
                {
                    if(s[i] == ')')
                    {
                        if(!st.empty() && st.top() == '(')
                        {
                            st.pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else if(s[i] == '}')
                    {
                        if(!st.empty() && st.top() == '{')
                        {
                            st.pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else if(s[i] == ']')
                    {
                        if(!st.empty() && st.top() == '[')
                        {
                            st.pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
            }

            if(st.empty())
            {
                return true;
            }
            else return false;
        }
};
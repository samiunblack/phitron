#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                if(st.empty() || st.top() != '(')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else if(s[i] == '}')
            {
                if(st.empty() || st.top() != '{')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }

            else if(s[i] == ']')
            {
                if(st.empty() || st.top() != '[')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                st.push(s[i]);
            }
        }  

        return st.size() == 0; 
    }
};
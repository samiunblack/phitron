#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i = 0; i < operations.size(); i++)
        {
            if(operations[i] == "C")
            {
                if(!st.empty()) st.pop();
            }

            else if(operations[i] == "D")
            {
                if(!st.empty()) st.push(st.top() * 2);
            }
            else if(operations[i] == "+")
            {
                int first = 0;
                int second = 0;
                if(!st.empty())
                {
                    first = st.top();
                    st.pop();
                }
                if(!st.empty())
                {
                    second = st.top();
                }

                st.push(first);
                st.push(first + second);
            }
            else
            {
                st.push(stoi(operations[i]));
            }
        }

        int sum = 0;
        
        while(!st.empty())
        {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};
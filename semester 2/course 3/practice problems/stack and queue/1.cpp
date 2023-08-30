#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for(int i = 0; i < operations.size(); i++)
        {
            if(operations[i] == "C")
            {
                st.pop_back();
            }
            else if(operations[i] == "D")
            {
                st.push_back(st[st.size() - 1] * 2);
            }
            else if(operations[i] == "+")
            {
                st.push_back(st[st.size() - 1] + st[st.size() - 2]);
            }
            else
            {
                st.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for(int i = 0; i < st.size(); i++)
        {
            sum += st[i];
        }    

        return sum;
    }
};
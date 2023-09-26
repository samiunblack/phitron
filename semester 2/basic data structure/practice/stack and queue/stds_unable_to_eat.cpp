#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> st;

        for(int i = sandwiches.size() - 1; i >= 0; i--)
        {
            st.push(sandwiches[i]);
        }

        for(int i = 0; i < students.size(); i++)
        {
            q.push(students[i]);
        }

        int curr = 0;

        while(!q.empty() && !st.empty())
        {
            if(q.front() == st.top())
            {
                curr = 0;
                q.pop();
                st.pop();
            }
            else
            {
                curr++;
                int s = q.front();
                q.pop();
                q.push(s);
            }

            if(curr > q.size()) break;
        }

        return q.size();
    }
};
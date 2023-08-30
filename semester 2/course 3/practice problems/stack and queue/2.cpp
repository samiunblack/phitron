#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> std;
        stack<int> snd;

        for(int i = 0; i < students.size(); i++)
        {
            std.push(students[i]);
        }

        for(int i = sandwiches.size(); i >= 0; i--)
        {
            snd.push(sandwiches[i]);
        }

        int curr_std = std.size();
        int i = 0;

        while(true)
        {
            if(std.front() == snd.top())
            {
                std.pop();
                snd.pop();
                i = 0;
                curr_std = std.size();
            }
            else
            {
                i++;
                int s = std.front();
                std.pop();
                std.push(s);
            }

            if(i >= curr_std) break;
        }

        curr_std = std.size();
        return curr_std;      
    }
};
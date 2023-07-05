#include <bits/stdc++.h>
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    return q;
}
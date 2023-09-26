#include <bits/stdc++.h> 
using namespace std;

queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;

    for(int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    queue<int> q2;

    while(!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    while(!q.empty())
    {
        q2.push(q.front());
        q.pop();
    }

    return q2;
}

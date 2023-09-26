#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int x = st.top();
    st.pop();
    reverseStack(st);

    stack<int> st2;
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }

    st2.push(x);

    while(!st2.empty())
    {
        st.push(st2.top());
        st2.pop();
    }
}
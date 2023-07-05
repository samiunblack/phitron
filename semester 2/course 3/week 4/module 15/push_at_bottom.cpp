#include <bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> st;

    while(!myStack.empty())
    {
        st.push(myStack.top());
        myStack.pop();
    }

    st.push(x);

    while(!st.empty())
    {
        myStack.push(st.top());
        st.pop();
    }

    return myStack;
}
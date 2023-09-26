#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    
    int n;
    cin >> n;

    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        st.push(a);
    }

    stack<int> st2;

    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }

    while(!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
}
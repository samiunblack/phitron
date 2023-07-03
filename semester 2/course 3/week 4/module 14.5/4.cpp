#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q1;

    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        q1.push(a); 
    }

    stack<int> st;
    while(!q1.empty())
    {
        st.push(q1.front());
        q1.pop();
    }

    queue<int> q2;
    while(!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    while(!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
}
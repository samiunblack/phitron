#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> que;

    int n, m;
    cin >> n;

    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        st.push(a);
    }

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a;
        que.push(a);
    }

    if(n != m)
    {
        cout << "NO";
        return 0;
    }

    while(!st.empty())
    {
        if(st.top() != que.front())
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        que.pop();
    }

    cout << "YES";
}
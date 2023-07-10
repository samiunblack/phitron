#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> que;
    stack<int> st;
    
    int n, m;
    cin >> n >> m;

    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        st.push(a);
    }

  for(int i = 0; i < m; i++)
    {
        cin >> a;
        que.push(a);
    }

  if(n != m) cout << "NO";
  else
  {
            bool flag = true;

   while(!que.empty())
    {
        if(que.front() != st.top())
        {
          flag = false;
          break;
        }
        que.pop();
      st.pop();
    }

    if(flag) cout << "YES";
    else cout << "NO";
  }
    
}
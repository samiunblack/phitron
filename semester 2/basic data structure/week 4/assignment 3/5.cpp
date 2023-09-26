#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  int n;
  cin >> n;

  while(n--)
    {
      int t;
      cin >> t;
      int x = t;
      stack<char> st;
      stack<char> s;
      while(t--)
        {
          char c;
          cin >> c;
          
          if(!st.empty())
          {
            if(c == 'R')
            {
              if(st.top() == 'B')
              {
                if(!s.empty() && s.top() == 'P')
                {
                  s.pop();
                }
                else
                {
                  s.push('P');
                }
                
              }
              else if(st.top() == 'G')
              {
                if(!s.empty() && s.top() == 'Y')
                {
                  s.pop();
                }
                else
                {
                  s.push('Y');
                }
                
              }
              st.pop();
            }
            else if(c == 'G')
            {
              if(st.top() == 'B')
              {
                if(!s.empty() && s.top() == 'C')
                {
                  s.pop();
                }
                else
                {
                  s.push('C');
                }
                
              }
              else if(st.top() == 'R')
              {
                if(!s.empty() && s.top() == 'Y')
                {
                  s.pop();
                }
                else
                {
                  s.push('Y');
                }
                
              }
              st.pop();
            }
            else if(c == 'B')
            {
              if(st.top() == 'R')
              {
                if(!s.empty() && s.top() == 'P')
                {
                  s.pop();
                }
                else
                {
                  s.push('P');
                }
                
              }
              else if(st.top() == 'G')
              {
                if(!s.empty() && s.top() == 'C')
                {
                  s.pop();
                }
                else
                {
                  s.push('C');
                }
                
              }
              st.pop();
            }
          }
          else
          {
            st.push(c);
            
          }
        }

        
      stack<char> final;
      while(!s.empty())
        {
          final.push(s.top());
          
          s.pop();
        }
       while(!final.empty())
        {
          cout <<final.top();
          final.pop();
        }
      if(x % 2 != 0 && !st.empty())
      {
        cout << st.top();
      }
      cout << endl;
    }
  
}
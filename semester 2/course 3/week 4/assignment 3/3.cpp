#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin >> q;
  queue<string> qu;
  while(q--)
    {
      int a; string s;
      cin >> a;
      if(a == 0)
      {
        cin >> s;
        qu.push(s);
      }
      else
      {
        if(!qu.empty())
        {
          cout << qu.front() << endl;
        qu.pop();
        }
        else
        {
          cout << "Invalid" << endl;
        }
      }
    }
}

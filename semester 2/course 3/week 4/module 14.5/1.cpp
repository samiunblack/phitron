#include <bits/stdc++.h>
using namespace std;

class Stack
{
    public:
        vector<int> arr;

        void push(int x)
        {
            arr.push_back(x);
        }

        void pop()
        {
            arr.pop_back();
        }

        int top()
        {
            return arr[arr.size() - 1];
        }

        int size()
        {   
            return arr.size();
        }

        int empty()
        {
            return arr.empty();
        }
};

int main()
{
    int n;
    cin >> n;

    Stack st1;

    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        st1.push(a);
    }

    int m;
    cin >> m;

    Stack st2;

    for(int i = 0; i < m; i++)
    {
        cin >> a;
        st2.push(a);
    }

    if(n != m)
    {
        cout << "NO";
        return 0;
    }

    bool flag = true;

    while(!st1.empty())
    {
        if(st1.top() != st2.top())
        {
            flag = false;
            break;
        }

        st1.pop();
        st2.pop();
    }

    if(flag) cout << "YES";
    else cout << "NO";
}
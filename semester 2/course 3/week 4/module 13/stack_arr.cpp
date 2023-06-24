#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int> stack;
    
        int size()
        {
            return stack.size();
        }

        bool empty()
        {
            if(size() == 0) return true;
            else return false;
        }

        void push(int val)
        {
            stack.push_back(val);
        }

        void pop()
        {
            stack.pop_back();
        }

        int top()
        {
            return stack.back();
        }
};


int main()
{
    myStack st;

    int n;
    cin >> n;

    for(int i = 0; i < n ; i++)
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
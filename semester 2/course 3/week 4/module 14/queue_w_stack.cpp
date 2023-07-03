#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    void reverse(stack<int> &st1, stack<int> &st2)
    {
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }

    stack<int> st1;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);    
    }
    
    int pop() {
        stack<int> st2;

        int last = 0;
        while(!st1.empty())
        {
            int k = st1.top();
            st1.pop();

            if(st1.empty())
            {
                last = k;
                break;
            }

            st2.push(k);
        }

        reverse(st1, st2);
        return last;
    }
    
    int peek() {
       stack<int> st2;

        int last = 0;
        while(!st1.empty())
        {
            int k = st1.top();
            st1.pop();

            if(st1.empty())
            {
                last = k;
            }

            st2.push(k);
        }

        reverse(st1, st2);
        return last;     
    }
    
    bool empty() {
        return st1.empty();    
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
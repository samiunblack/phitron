#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    
        Node(int val, Node* next = NULL, Node* prev = NULL)
        {
            this->val = val;
            this->next = next;
            this->prev = prev;
        }
};

class Queue
{
    public:
        list<int> l;

        void push(int val)
        {
            l.push_back(val);
        }

        void pop()
        {
            l.pop_front();
        }

        int front()
        {
            return l.front();
        }

        int size()
        {
            return l.size();
        }

        bool empty()
        {
            return l.empty();
        }
};

int main()
{
    Queue que;
    
    int n;
    cin >> n;

    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        que.push(a);
    }

    while(!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
}
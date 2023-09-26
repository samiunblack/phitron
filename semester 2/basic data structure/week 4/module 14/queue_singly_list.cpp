#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    
        Node(int val, Node* next = NULL)
        {
            this->val = val;
            this->next = next;
        }
};

class Queue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val)
        {
            sz++;
            Node* node = new Node(val);

            if(tail == NULL)
            {
                head = node;
                tail = node;
                return;
            }

            tail->next = node;
            tail = tail->next;
        }

        void pop()
        {
            sz--;
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;

            if(head == NULL)
            {
                tail = NULL;
            }
        }

        int front()
        {
            return head->val;
        }

        int size()
        {
            return sz;
        }

        bool empty()
        {
            return sz == 0;
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
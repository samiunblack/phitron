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
            node->prev = tail;
            tail = tail->next;
        }

        void pop()
        {
            sz--;
            Node* deleteNode = head;

            head = head->next;
            
            if(head != NULL) head->prev = NULL;
            else tail = NULL;
            
            delete deleteNode;
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
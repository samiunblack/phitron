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

void insert_tail(Node* &head, Node* &tail, int val)
{
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

class myStack
{
    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;
    public:
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
            Node* to_del = tail;
            tail = tail->prev;
            if(tail == NULL) head = NULL;
            else tail->next = NULL;
            delete to_del;
            sz--;
        }

        int top()
        {
            return tail->val;
        }

        int size()
        {
            return sz;
        }

        bool empty()
        {
            if(sz == 0) return true;
            else return false;
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
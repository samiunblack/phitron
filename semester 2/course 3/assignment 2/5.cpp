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

void insert_head(Node* &head, Node* &tail, int val)
{
    Node* node = new Node(val);

    node->next = head;
    head = node;

    if(tail == NULL)
    {
        tail = head;
    }
}


void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* node = new Node(val);
    if(head == NULL)
    {
        head = node;
        tail = head;
        return;
    }

    tail->next = node;
    tail = tail->next;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while(q--)
    {
        int x, v;
        cin >> x >> v;

        if(x == 0)
        {
            insert_head(head, tail, v);
            cout << head->val << " " << tail->val << endl;
        }

        else if(x == 1)
        {
            insert_tail(head, tail, v);
            cout << head->val << " " << tail->val << endl;
        }
    }
}
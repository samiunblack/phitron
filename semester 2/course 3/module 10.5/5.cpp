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

void sort(Node* head, Node* tail)
{
    for(auto i = head; i != NULL; i = i->next)
    {
        for(auto j = i->next; j != NULL; j = j ->next)
        {
            if(i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void print(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int a;

    while(true)
    {
        cin >> a;
        if(a == -1) break;

        insert_tail(head, tail, a);
    }

    sort(head, tail);
    print(head);
}
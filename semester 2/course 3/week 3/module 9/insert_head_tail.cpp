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

void print(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void print_reverse(Node* tail)
{
    Node* tmp = tail;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    
    cout << endl;
}

void insert_head(Node* &head, Node* &tail, int val)
{
    Node* node = new Node(val);

    node->next = head;
    head = node;

    if(head->next != NULL)
    {
        head->next->prev = node;
    }

    if(tail == NULL)
    {
        tail = head;
    }
}

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* node = new Node(val);
    
    if(tail == NULL)
    {
        head = node;
        tail = node;
        return;
    }
    
    node->prev = tail;
    tail->next = node;
    
    tail = tail->next;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    Node* tail = b;

    print(head);
    insert_head(head, tail, 100);
    print(head);
    print_reverse(tail);

    insert_tail(head, tail, 200);
    print(head);
    print_reverse(tail);
}
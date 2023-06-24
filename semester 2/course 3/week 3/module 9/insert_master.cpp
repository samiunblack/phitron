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

void insert_pos(Node* head, int pos, int val)
{
    Node* node = new Node(val);
    Node* tmp = head;

    for(int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    
    node->next = tmp->next;
    tmp->next->prev = node;

    tmp->next = node;
    node->prev = tmp;
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
        tail = node;
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

int size(Node* head)
{
    int cnt = 0;
    Node* tmp = head;

    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
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

    int pos, val;
    cin >> pos >> val;

    if(pos > size(head) || pos < 0)
    {
        cout << "Invalid Position" << endl;
    }

    else if(pos == 0)
    {
        insert_head(head, tail, val);
    }
    else if(pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert_pos(head, pos, val);
    }

    print(head);
    print_reverse(tail);
}
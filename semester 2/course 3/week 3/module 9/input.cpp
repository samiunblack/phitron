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
    Node* head = NULL;
    Node* tail = NULL;

    int a;

    while(true)
    {
        cin >> a;
        if(a == -1) break;

        insert_tail(head, tail, a);
    }

    print(head);
    print_reverse(tail);
}
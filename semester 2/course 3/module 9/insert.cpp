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
        if(tmp == NULL)
        {
            cout << "Invalid Position" << endl;
            return;
        }
        tmp = tmp->next;
    }

    if(tmp == NULL)
    {
        cout << "Invalid Position" << endl;
        return;
    }
    
    node->next = tmp->next;
    tmp->next->prev = node;

    tmp->next = node;
    node->prev = tmp;
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
    insert_pos(head, 1, 100);
    print(head);
}
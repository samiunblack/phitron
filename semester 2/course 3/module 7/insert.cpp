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

void insert_head(Node* &head, int val)
{
    Node* node = new Node(val);

    node->next = head;
    head = node;
}

void insert(Node* &head, int pos, int val)
{
    Node* node = new Node(val);
    Node* tmp = head;

    for(int i = 0; i < pos - 1; i++)
    {

        tmp = tmp->next;
    }

    node->next = tmp->next;
    tmp->next = node;
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

int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    
    return count;
}

void print_list(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);

    head->next = a;
    a->next = b;   
    b->next = c;
    c->next = tail; 

    print_list(head);

    int pos, val;
    cin >> pos >> val;

    if(pos > size(head))
    {
        cout << "Invalid position";
    }
    else if(pos == 0)
    {
        insert_head(head, val);
    }
    else if(pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert(head, pos, val);
    }

    print_list(head);
}
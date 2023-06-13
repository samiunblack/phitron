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

void print_list_reversed(Node* head)
{
    if(head == NULL)
    {
        return;
    }

    print_list_reversed(head->next);
    
    cout << head->val << " ";
    
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

    print_list_reversed(head);
}
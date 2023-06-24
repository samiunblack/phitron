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

void reverse(Node* &head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

    while(next != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next;
        next = curr->next;
    }
    
    curr->next = prev;
    head = curr;
}

Node* reverse_recursive(Node* &head, Node* curr, Node* node)
{
    if(curr->next == NULL)
    {
        head = curr;
        return head;
    }

    node = reverse_recursive(head, curr->next, node);
    node->next = curr;
    curr->next = NULL;
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

    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

    reverse_recursive(head, head, NULL);
    print_list(head);
}
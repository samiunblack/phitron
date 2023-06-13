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

void delete_node(Node* &head, int pos)
{
    Node* tmp = head;

    for(int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node* to_delete = tmp->next;
    tmp->next = tmp->next->next;

    delete to_delete;
}

void delete_head(Node* &head)
{
    Node* tmp = head;
    head = head->next;

    delete tmp;
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

    int pos;
    cin >> pos;

    if(pos > size(head) - 1)
    {
        cout << "Invalid Position" << endl;
    }
    else if(pos == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_node(head, pos);
    }

    print_list(head);
}
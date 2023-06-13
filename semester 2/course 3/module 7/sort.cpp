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

void sort(Node* head)
{
    Node* tmp = head;
    for(auto i = tmp; i != NULL; i = i->next)
    {
        for(auto j = i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }   
}

int main()
{
    Node* head = new Node(50);
    Node* a = new Node(40);
    Node* b = new Node(30);
    Node* c = new Node(20);
    Node* tail = new Node(10);

    head->next = a;
    a->next = b;   
    b->next = c;
    c->next = tail; 

    print_list(head);

    sort(head);

    print_list(head);
}
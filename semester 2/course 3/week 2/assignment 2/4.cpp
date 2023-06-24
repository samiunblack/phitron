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


void print_list(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

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
    Node* head = NULL;
    Node* tail = NULL;

    int a;
    while(true)
    {
        cin >> a;
        if(a == -1) break;


        insert_tail(head, tail, a);
    }

    print_list_reversed(head);
    cout << endl;
    print_list(head);
}

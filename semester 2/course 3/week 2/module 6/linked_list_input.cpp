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

void insert_at_tail(Node* &head, int val)
{
    Node* node = new Node(val);
    
    if(head == NULL)
    {
        head = node;
        return;
    }

    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }

    tail->next = node;
}

void print_linked_list(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->val << "-> ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    int a;
    Node* head = NULL;

    while(cin >> a)
    {
        if(a == -1)
        {
            break;
        }
        insert_at_tail(head, a);
    }

    print_linked_list(head);   
}
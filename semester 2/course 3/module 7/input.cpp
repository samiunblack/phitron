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
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = head;

    int a;
    while(true)
    {
        cin >> a;
        if(a == -1)
        {
            break;
        }
        
        insert_tail(head, tail, a);
    }

    print_list(head);
}
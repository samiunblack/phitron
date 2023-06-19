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

void delete_pos(Node* head, int pos)
{
    Node* tmp = head;

    for(int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node* to_delete = tmp->next;

    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;

    delete to_delete;
}

void delete_head(Node* &head, Node* &tail)
{
    if(head == NULL)
    {
        return;
    }

    if(tail == head)
    {
        tail = head->next;
    }

    Node* to_delete = head;

    head = head->next;
    if(head != NULL)
    {
        head->prev = NULL;
    }
    

    delete to_delete;
}

void delete_tail(Node* &tail)
{
    if(tail == NULL)
    {
        return;
    }

    Node* to_delete = tail;

    tail = tail->prev;
    tail->next = NULL;

    delete to_delete;
}

int size(Node* head)
{
    int cnt = 0;
    Node* tmp = head;

    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
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
    
    int pos;
    cin >> pos;

    if(pos > size(head) - 1 || pos < 0)
    {
        cout << "Invalid Position" << endl;
    }

    else if(pos == 0)
    {
        delete_head(head, tail);
    }
    else if(pos == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_pos(head, pos);
    }

    print(head);
    print_reverse(tail);
}
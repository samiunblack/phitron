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

void sort(Node* head)
{
    Node* tmp = head;

    for(auto i = tmp; i != NULL; i = i->next)
    {
        for(auto j = i->next; j != NULL; j = j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void print(Node* head)
{
    auto tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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

    sort(head);
    print(head);
}
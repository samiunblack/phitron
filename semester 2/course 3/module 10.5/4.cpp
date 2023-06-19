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

void insert_head(Node* &head, Node* &tail, int val)
{
    Node* node = new Node(val);

    node->next = head;
    
    if(head != NULL)
    {
        head->prev = node;
    }

    head = node;

    if(tail == NULL)
    {
        tail = head;
    }
}

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* node = new Node(val);

    if(tail == NULL)
    {
        head = node;
        tail = node;
        return;
    }

    tail->next = node;
    node->prev = tail;
    tail = tail->next;
}

void insert_pos(Node* &head, int pos, int val)
{
    Node* node = new Node(val);
    Node* tmp = head;

    for(int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    node->next = tmp->next;
    tmp->next = node;
    node->prev = tmp;
    node->next->prev = node;
}

int size(Node* head)
{
    Node* tmp = head;

    int cnt = 0;

    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

void print(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void print_reverse(Node* tail)
{
    Node* tmp = tail;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while(q--)
    {
        int x, v;
        cin >> x >> v;

        if(x > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if(x == 0)
        {
            insert_head(head, tail, v);
        }
        else if(x == size(head))
        {
            insert_tail(head, tail, v);
        }
        else
        {
            insert_pos(head, x, v);
        }

        print(head);
        cout << endl;
        print_reverse(tail);
        cout << endl;
    }
}
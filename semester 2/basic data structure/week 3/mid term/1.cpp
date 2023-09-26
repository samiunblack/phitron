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

    sort(head);

    Node* tmp = head;

    while(head != NULL && head->next != NULL && head->val == head->next->val)
    {
        head = head->next;
    }

    while(tmp != NULL)
    {
        while(tmp->next != NULL && tmp->val == tmp->next->val)
        {
            tmp->next = tmp->next->next;
        }

        tmp = tmp->next;
    }

    print_list(head);
}
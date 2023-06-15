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

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int a;
    while(true)
    {
        cin >> a;
        if(a == -1) break;


        insert_tail(head, tail, a);
    }

    while(true)
    {
        cin >> a;
        if(a == -1) break;

        insert_tail(head2, tail2, a);
    }

    int size1 = size(head);
    int size2 = size(head2);

    if(size1 != size2)
    {
        cout << "NO";
    }
    else
    {
        int flag = 1;
        Node* tmp = head;
        Node* tmp2 = head2;
        while(tmp != NULL)
        {
            if(tmp->val != tmp2->val)
            {
                flag = 0;
                break;
            }

            tmp = tmp->next;
            tmp2 = tmp2->next;
        }

        if(flag) cout << "YES";
        else cout << "NO";
    }
}

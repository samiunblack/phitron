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

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;

    int a;
    while(true)
    {
        cin >> a;
        if(a == -1) break;

        insert_tail(head1, tail1, a);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true)
    {
        cin >> a;
        if(a == -1) break;

        insert_tail(head2, tail2, a);
    }

    if(size(head1) != size(head2))
    {
        cout << "NO";
    }
    else
    {
        bool flag = true;
        Node* tmp1 = head1;
        Node* tmp2 = head2;

        while(tmp1 != NULL)
        {
            if(tmp1->val != tmp2->val)
            {
                flag = false;
                break;
            }

            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }

        if(flag) cout << "YES";
        else cout << "NO";
    }
}
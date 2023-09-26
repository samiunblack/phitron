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

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    Node* tail1 = NULL;
    Node* tail2 = NULL;

    int size1 = 0;
    int size2 = 0;

    int a;

    while(true)
    {
        cin >> a;
        if(a == -1)
        {
            break;
        }

        insert_tail(head1, tail1, a);
        size1++;
    }

    while(true)
    {
        cin >> a;
        if(a == -1) break;

        insert_tail(head2, tail2, a);
        size2++;
    }

    if(size1 == size2) cout << "YES";
    else cout << "NO";
}
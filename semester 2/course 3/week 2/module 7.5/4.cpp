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
    Node* head = NULL;
    Node* tail = NULL;

    int a;
    int mx = INT_MIN;

    while(true)
    {
        cin >> a;
        if(a == -1) break;

        insert_tail(head, tail, a);

        mx = max(mx, a);
    }

    cout << mx;
}
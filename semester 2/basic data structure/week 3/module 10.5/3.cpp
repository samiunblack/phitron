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

bool is_palindrome(Node* i, Node* j)
{
    while(i != j && j->next != i)
    {
        if(i->val != j->val)
        {
            return false;
        }
        i = i->next;
        j = j->prev;
    }

    return true;
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

    bool ans = is_palindrome(head, tail);
    
    if(ans) cout << "YES";
    else cout << "NO";
}
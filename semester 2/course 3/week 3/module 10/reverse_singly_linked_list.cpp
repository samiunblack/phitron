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

void print(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void reverse(Node* &head, Node* curr)
{
    if(curr->next == NULL)
    {
        head = curr;
        return;
    }

    reverse(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
}

int main()
{
    Node* head = new Node(10, new Node(20, new Node(30)));

    reverse(head, head);

    print(head);
}
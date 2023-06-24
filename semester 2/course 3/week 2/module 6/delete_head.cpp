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

void delete_head(Node* &head)
{
    if(head == NULL)
    {
        return;
    }
    
    Node* to_del = head;
    head = head->next;
    delete to_del;
}

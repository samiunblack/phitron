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

void insert_at_head(Node* &head, int val)
{
    Node* node = new Node(val);

    node->next = head;
    head = node;
         
}

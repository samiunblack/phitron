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

void insert_at_pos(Node* &head, int pos, int val)
{
    Node* node = new Node(val);

    Node* current = head;

    int i = 0;
    while(i < pos - 1)
    {
        if(current != NULL)
        {
            current = current->next;
        }
        else
        {
            cout << "POSITION IS NOT VALID" << endl;
            return;
        }
        i++;
    }

    node->next = current->next;
    current->next = node;
}

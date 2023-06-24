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

void delete_from_pos(Node* &head, int pos)
{
    int i = 0;
    Node* curr = head;

    while(i < pos - 1)
    {
        if(curr != NULL)
        {
            curr = curr->next;
        }
        else
        {
            cout << "POSITION IS NOT VALID" << endl;
            return;
        }
        i++;
    }
    Node* to_del = curr->next;
    
    if(curr->next == NULL)
    {
        cout << "POSITION IS NOT VALID" << endl;
        return;
    }

    curr->next = curr->next->next;
    delete to_del;
}

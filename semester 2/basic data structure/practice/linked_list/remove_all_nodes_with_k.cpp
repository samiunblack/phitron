#include <bits/stdc++.h> 
    
class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

Node *removeNodes(Node *head, int k) {
    while(head && head->data == k)
    {
        head = head->next;   
    }

    Node* tmp = head;

    while(tmp != NULL)
    {
        while(tmp->next && tmp->next->data == k)
        {
            tmp->next = tmp->next->next;
        }

        tmp = tmp->next;
    }

    return head;
}
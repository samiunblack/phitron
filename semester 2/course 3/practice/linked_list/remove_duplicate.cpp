#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node *prev;
    Node *next;
    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node (int data, Node *next, Node *prev) {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

Node * removeDuplicates(Node *head)
{
    while(head && head->next && head->data == head->next->data)
    {
        head = head->next;
    }

    Node* tmp = head;

    while(tmp != NULL)
    {
        while(tmp->next && tmp->next->next && tmp->next->data == tmp->next->next->data)
        {
            tmp->next = tmp->next->next;
        }
        
        tmp = tmp->next;
    }

    return head;
}

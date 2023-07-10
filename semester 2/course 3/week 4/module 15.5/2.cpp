#include <bits/stdc++.h> 

class Node
{
    public:
        int val;
        Node* next;

        Node(int x)
        {
            this->val = x;
            this->next = NULL;
        }
};

class Queue {
public:
    Node* head = NULL;
    Node* tail = NULL;

    Queue() {

    }

    bool isEmpty() {
        return head == NULL;
    }

    void enqueue(int data) {
        Node* node = new Node(data);

        if(tail == NULL)
        {
            head = node;
            tail = node;
            return;
        }     

        tail->next = node;
        tail = tail->next;
    }

    int dequeue() {
        if(head)
        {
            int ans = head->val;
            head = head->next;
            if(head == NULL) tail = NULL;

            return ans;
        }
        else
        {
            return -1;
        }
    }

    int front() {
        if(head)
        {
            return head->val;
        }
        else return -1;
    }
};
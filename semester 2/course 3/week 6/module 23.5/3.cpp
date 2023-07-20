#include <bits/stdc++.h> 

class Node
{
    public:
    int val;
    Node* next;
    
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }  
};


class Queue {
public:
    Node* head = NULL;
    Node* tail = NULL;

    int size = 0;
    
    Queue() {
        
    }


    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int data) {
        size++;

        Node* node = new Node(data);
        
        if(head == NULL)
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
            size--;

            return ans;
        }

        return -1;
    }

    int front() {
        if(head) return head->val;
        return -1;
    }
};
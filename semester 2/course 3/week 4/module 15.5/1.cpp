#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
    
        Node(int val, Node* next = NULL)
        {
            this->data = val;
            this->next = next;
        }
};

class Stack
{
    //Write your code here

public:
    Node* head = NULL;
    Node* tail = NULL;

    int size = 0;

    Stack()
    {
        //Write your code here 
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return head == NULL; 
    }

    void push(int data)
    {
        Node* node = new Node(data);
        size++;
        if(head == NULL)
        {
            head = node;
            tail = node;
            return;
        }

        node->next = head;
        head = node;
    }

    void pop()
    {
        
        if(head == NULL) return;
        head = head->next;
        size--;
    }

    int getTop()

    {
        if(head == NULL) return -1;
        return head->data;
    }
};
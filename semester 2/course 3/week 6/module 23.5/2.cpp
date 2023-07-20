#include <bits/stdc++.h>
using namespace std;

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

class MyLinkedList {
public:
    Node* head = NULL;

    int size = 0;

    MyLinkedList() {
        
    }

    void display()
    {
        Node* tmp = head;

        while(tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    
    int get(int index) {
        if(index > size - 1)
        {
            return -1;
        }

        Node* tmp = head;

        for(int i = 0; i < index; i++)
        {
            tmp = tmp->next;
        }

        if(tmp) return tmp->val;
        return -1;
    }
    
    void addAtHead(int val) {
        size++;
        
        Node* node = new Node(val);

        if(head == NULL)
        {
            head = node;
            return;
        }    

        node->next = head;
        head = node;
    }
    
    void addAtTail(int val) {
        size++;

        Node* node = new Node(val);

        Node* tmp = head;

        if(tmp == NULL)
        {
            head = node;
            return;
        }

        while(tmp && tmp->next != NULL)
        {
            tmp = tmp->next;
        }

        tmp->next = node;
    }
    
    void addAtIndex(int index, int val) {
        if(index > size)
        {
            return;
        }
        
        if(index == 0)
        {
            addAtHead(val);
            return;
        }    

        if(index == size)
        {
            addAtTail(val);
            return;
        }

        Node* tmp = head;
        
        for(int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        Node* node = new Node(val);

        node->next = tmp->next;
        tmp->next = node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index > size - 1)
        {
            return;
        }          

        if(index == 0)
        {
            head = head->next;
            return;
        }

        Node* tmp = head;

        for(int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }

        tmp->next = tmp->next->next;
        size--;
    }
};
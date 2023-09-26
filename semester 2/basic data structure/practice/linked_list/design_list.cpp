#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

class MyLinkedList {
public:
    Node* head = NULL;
    Node* tail = head;
    int size = 0;
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index >= size)
        {
            return -1;
        }

        Node* tmp = head;

        while(index-- && tmp != NULL)
        {
            tmp = tmp->next;
        }

        if(tmp == NULL) return -1;
        else return tmp->val;
    }
    
    void addAtHead(int val) {
        Node* node = new Node(val);
        size++;

        if(head == NULL)
        {
            head = node;
            tail = head;
            return;
        }

        node->next = head;
        head->prev = node;
        head = node;
    }
    
    void addAtTail(int val) {
        Node* node = new Node(val);
        size++;

        if(tail == NULL)
        {
            head = node;
            tail = head;
            return;
        }   
        
        tail->next = node;
        node->prev = tail;
        tail = tail->next;
    }
    
    void addAtIndex(int index, int val) {
        if(index > size) return;
        if(index == size)
        {
            addAtTail(val);
            return;
        }

        if(index == 0)
        {
            addAtHead(val);
            return;
        }

        Node* node = new Node(val);

        Node* tmp = head;

        for(int i = 1; i < index; i++)
        {
            if(tmp) tmp = tmp->next;
        }

        if(!tmp) return;

        node->next = tmp->next;
        if(tmp->next) tmp->next->prev = node;
        node->prev = tmp;
        tmp->next = node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index >= size) return;

        if(index == size - 1)
        {
            tail = tail->prev;
            size--;
            return;
        }
        if(index == 0)
        {
            head = head->next;
            head->prev = NULL;
            size--;
            return;
        }

        Node* tmp = head;

        for(int i = 1; i < index; i++)
        {
            if(tmp) tmp = tmp->next;
        }

        if(!tmp) return;

        tmp->next = tmp->next->next;
        if(tmp->next)tmp->next->prev = tmp;
        size--;
    }
};

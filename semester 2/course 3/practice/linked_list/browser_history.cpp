#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        string val;
        Node* next;
        Node* prev;

        Node(string val, Node* next = NULL, Node* prev = NULL)
        {
            this->val = val;
            this->next = next;
            this->prev = prev;
        }
};

class BrowserHistory {
public:
    Node* head = NULL;
    Node* tail = head;
    BrowserHistory(string homepage) {
        head = new Node(homepage);
        tail = head;    
    }
    
    void visit(string url) {
        if(head == NULL)
        {
            head = new Node(url);
            tail = head;
        }
        else
        {
            
            tail->next = new Node(url);
            tail->next->prev = tail;
            tail = tail->next;
        }
    }
    
    string back(int steps) {
        while(steps-- && tail != NULL && tail->prev != NULL)
        {
            tail = tail->prev;
        }

        return tail->val;
        
    }
    
    string forward(int steps) {
        while(steps-- && tail != NULL && tail->next != NULL)
        {
            tail = tail->next;
        }

        return tail->val;
    }
};
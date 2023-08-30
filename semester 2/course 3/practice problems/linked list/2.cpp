#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        string val;
        Node* next = NULL;
        Node* prev = NULL;

        Node(string val)
        {
            this->val = val;
        }
};

class BrowserHistory {
    Node* head = NULL;
    Node* tmp = head;
    Node* curr = head;
public:
    BrowserHistory(string homepage) {
        head = new Node(homepage);
        tmp = head;
        curr = head;
    }
    
    void visit(string url) {
        Node* node = new Node(url);
        tmp->next = node;
        tmp->next->prev = tmp;
        tmp = tmp->next;   
    }
    
    string back(int steps) {
        while(tmp->prev != NULL && steps != 0)
        {
            tmp = tmp->prev;
            steps--;
        }

        return tmp->val;
    }
    
    string forward(int steps) {
        while(tmp->next != NULL && steps != 0)
        {
            tmp = tmp->next;
            steps--;
        }

        return tmp->val;
    }
};

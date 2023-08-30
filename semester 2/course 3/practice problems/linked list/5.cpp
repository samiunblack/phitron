#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next, *prev;
    Node(int val)
    {
        this->val = val, this->next = NULL, this->prev = NULL;
    }
};
class MyLinkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    MyLinkedList()
    {

    }

    void display(Node* tmp)
    {
        while(tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }

        cout << endl;
    }


    int get(int index)
    {
        if (index >= size || index < 0)
            return -1;
        else if (head == NULL)
            return -1;
        else if (index == 0)
            return head->val;
        else if (index == size - 1)
            return tail->val;
        Node *tmp = head;
        for (int i = 1; i <= index; i++)
        {
            tmp = tmp->next;
        }


        return tmp->val;
    }
    void addAtHead(int val)
    {
        size++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;

            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void addAtTail(int val)
    {
        size++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            

            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

    }
    void addAtIndex(int index, int val)
    {
        if (index > size)
            return;
        
        else if (index == size) addAtTail(val);
        else if (index == 0)
            addAtHead(val);
        else
        {
            Node *tmp = head;
            Node *newNode = new Node(val);

            for (int i = 1; i < index; i++)
            {
                tmp = tmp->next;
            }
            tmp->next->prev = newNode;
            newNode->next = tmp->next;
            newNode->prev = tmp;
            tmp->next = newNode;
            size++;
        }
    }
    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
            return;
        else if (head == NULL)
            return;
        else if (index == 0)
        {
            Node *delNode = head;
            head = head->next;
            if(head) head->prev = NULL;
            if (head == NULL)
                tail = NULL;
            delete delNode;
            size--;
        }
        else if (index == size - 1)
        {
            Node *delNode = tail;
            tail = tail->prev;
            tail->next = NULL;
            if (tail == NULL)
                head = NULL;
            size--;
        }
        else
        {
            Node *tmp = head;
            for (int i = 1; i < index; i++)
            {
                tmp = tmp->next;
            }
            Node *delNode = tmp->next;
            if (tmp->next && tmp->next->next != NULL)
                tmp->next->next->prev = tmp;
            tmp->next = tmp->next->next;
            delete delNode;
            size--;
        }
    }
};
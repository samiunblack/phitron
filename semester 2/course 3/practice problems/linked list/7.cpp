#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

int binaryToInteger(int n, Node *head)
{
    string binaryNumber = "";

    Node *tmp = head;
    while (tmp != NULL)
    {
        binaryNumber.push_back(tmp->data + '0');
        tmp = tmp->next;
    }

    return stoi(binaryNumber, 0, 2);
}
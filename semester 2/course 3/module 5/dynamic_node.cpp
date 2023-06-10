#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    
        Node(int val, Node* next = NULL)
        {
            this->val = val;
            this->next = next;
        }
};

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);

    head->next = a;

    cout << head->val << endl;
    cout << head->next->val << endl;
}
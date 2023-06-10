#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;
    
        Node(int value, Node* next = NULL)
        {
            this->value = value;
            this->next = next;
        }
};

int main()
{
    // Node* one = new Node(5);
    // Node* two = new Node(10);
    // one->next = two;

    int n;
    cin >> n;
    
    int a;
    cin >> a;

    Node* head = new Node(a);
    Node* current = head;

    for(int i = 1; i < n; i++)
    {
        int val;
        cin >> val;
        Node* node = new Node(val);
        
        current->next = node;
        current = node;
    }

    Node* i = head;

    while(i)
    {
        cout << i->value << " -> ";
        i = i->next;
    }
    cout << "NULL" << endl;
}
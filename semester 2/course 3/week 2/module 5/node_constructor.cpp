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


int main()
{
    Node a(10), b(20);

    a.next = &b;

    cout << a.val << endl;
    cout << a.next->val << endl;
}
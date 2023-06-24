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
    Node* head = NULL;
    Node* temp;

    int a;
    int count = 0;

    while(true)
    {
        cin >> a;
        if(a == -1)
        {
            break;
        }
        
        if(head == NULL)
        {
            head = new Node(a);
            temp = head;
            count++;
            continue;
        }

        temp->next = new Node(a);
        temp = temp->next;

        count++; 
    }

    cout << count;
}
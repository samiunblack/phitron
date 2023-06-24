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
            continue;
        }

        temp->next = new Node(a);
        temp = temp->next;

    }

    temp = head;

    bool flag = true;

    while(temp != NULL)
    {
        if(temp->next == NULL)
        {
            break;
        }

        if(temp->val > temp->next->val)
        {
            flag = false;
            break;
        }

        temp = temp->next;
    }

    if(flag) cout << "YES";
    else cout << "NO";
}
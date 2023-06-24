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
    Node* temp = head;

    int a;

    while(true)
    {
        cin >> a;
        if(a == -1)
        {
            break;
        }
        
        if(temp == NULL)
        {
            head = new Node(a);
            temp = head;
            continue;
        }

        temp->next = new Node(a);
        temp = temp->next;
    }

    temp = head;

    while(temp != NULL)
    {
        Node* curr = temp->next;
        while(curr != NULL)
        {
            if(temp->val > curr->val)
            {
                int swap = temp->val;
                temp->val = curr->val;
                curr->val = swap;
            }

            curr = curr->next;
        }

        temp = temp->next;
    }

    temp = head;
    bool flag = false;
    while(true)
    {
        if(temp->next == NULL)
        {
            break;
        }

        if(temp->val == temp->next->val)
        {
            flag = true;
            break;
        }

        temp = temp->next;
    }

    if(flag) cout << "YES";
    else cout << "NO";
}
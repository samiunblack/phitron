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

void insert_at_pos(Node* &head, int pos, int val)
{
    Node* node = new Node(val);

    if(pos == 0)
    {
        node->next = head;
        head = node;
        return;
    }

    Node* temp = head;

    int i = 0;
    while(i < pos - 1)
    {
        if(temp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }

        temp = temp->next;
        i++;
    }

    if(temp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    node->next = temp->next;
    temp->next = node;
}

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

    int q;
    cin >> q;

    while(q--)
    {
        int pos, val;
        cin >> pos >> val;

        insert_at_pos(head, pos, val);
        
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;   
        }
        cout << endl;
    }
}
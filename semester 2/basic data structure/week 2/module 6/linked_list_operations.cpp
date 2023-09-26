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

void insert_at_head(Node* &head, int val)
{
    Node* node = new Node(val);

    node->next = head;
    head = node;
         
}

void insert_at_tail(Node* &head, int val)
{
    Node* node = new Node(val);
    
    if(head == NULL)
    {
        head = node;
        return;
    }

    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }

    tail->next = node;
}

void insert_at_pos(Node* &head, int pos, int val)
{
    Node* node = new Node(val);

    Node* current = head;

    int i = 0;
    while(i < pos - 1)
    {
        if(current != NULL)
        {
            current = current->next;
        }
        else
        {
            cout << "POSITION IS NOT VALID" << endl;
            return;
        }
        i++;
    }

    node->next = current->next;
    current->next = node;
}

void delete_head(Node* &head)
{
    if(head == NULL)
    {
        return;
    }
    
    Node* to_del = head;
    head = head->next;
    delete to_del;
}

void delete_from_pos(Node* &head, int pos)
{
    int i = 0;
    Node* curr = head;

    while(i < pos - 1)
    {
        if(curr != NULL)
        {
            curr = curr->next;
        }
        else
        {
            cout << "POSITION IS NOT VALID" << endl;
            return;
        }
        i++;
    }
    Node* to_del = curr->next;
    
    if(curr->next == NULL)
    {
        cout << "POSITION IS NOT VALID" << endl;
        return;
    }

    curr->next = curr->next->next;
    delete to_del;
}

void print_linked_list(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->val << "-> ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;

    cout << "Option 1: Insert at Tail" << endl;
    cout << "Option 2: Insert at any position" << endl;
    cout << "Option 3: Insert at head" << endl;
    cout << "Option 4: Delete from any position" << endl;
    cout << "Option 5: Delete head" << endl;

    int op;

    while(cin >> op)
    {
        if(op == 1)
        {
            int a;
            cin >> a;

            insert_at_tail(head, a);
        }

        else if(op == 2)
        {
            int pos;
            cin >> pos;

            int a;
            cin >> a;

            if(pos == 0)
            {
                insert_at_head(head, a);
                continue;
            }

            insert_at_pos(head, pos, a);
        }

        else if(op == 3)
        {
            int a;
            cin >> a;

            insert_at_head(head, a);
        }

        else if(op == 4)
        {
            int pos;
            cin >> pos;

            if(pos == 0)
            {
                delete_head(head);
                continue;
            }

            delete_from_pos(head, pos);
        }

        else if(op == 5)
        {
            delete_head(head);
        }
        print_linked_list(head);
    }
}
#include <bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        string val;
        Node* next;
        Node* prev;

    Node(string val, Node* next = NULL, Node* prev = NULL)
    {
        this->val = val;
        this->next = next;
        this->prev = prev;
    }
};

void insert_tail(Node* &head, Node* &tail, string val)
{
    Node* node = new Node(val);
    
    if(tail == NULL)
    {
        head = node;
        tail = node;
        return;
    }
    node->prev = tail;
    tail->next = node;
    
    tail = tail->next;
}

void print(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}
void print_reverse(Node* tail)
{
    Node* tmp = tail;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    
    cout << endl;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string val;
    while(true)
    {
        cin >> val;
        if(val == "end") break;

        insert_tail(head, tail, val);
    }

    int q;
    cin >> q;

    tail = head;

    while(q--)
    {
        string x;
        cin >> x;

        if(head == NULL)
        {
            cout << "Not Available" << endl;
        }

        else if(x == "visit")
        {
            string s;
            cin >> s;
            
            Node* tmp = head;
            bool flag = false;

            while(tmp != NULL)
            {
                if(tmp->val == s)
                {
                    cout << tmp->val << endl;
                    flag = true;
                    tail = tmp;
                }

                tmp = tmp->next;
            }

            if(!flag) cout << "Not Available"  << endl;
        } 
        else if(x == "next")
        {
            if(tail != NULL && tail->next != NULL)
            {
                cout << tail->next->val << endl;
                tail = tail->next;
                
            }
            else
            {
                cout << "Not Available"  << endl;
            }
        }
        else if(x == "prev")
        {
            if(tail != NULL && tail->prev != NULL)
            {
                cout << tail->prev->val << endl;
                tail = tail->prev;
                
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}
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

int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    
    return count;
}

void print_list(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void sort(Node* head)
{
    Node* tmp = head;
    for(auto i = tmp; i != NULL; i = i->next)
    {
        for(auto j = i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }   
}

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* node = new Node(val);
    if(head == NULL)
    {
        head = node;
        tail = head;
        return;
    }

    tail->next = node;
    tail = tail->next;
}

void reverse_list(Node* curr, Node* &start, bool *flag)
{
    if(curr == NULL)
    {
        return;
    }

    reverse_list(curr->next, start, flag);

    if(curr->val == start->val)
    {
        start = start->next;
    }
    else
    {
        *flag = false;
        return;
    }
        
}
bool isPalindrome(Node* head) {
    bool flag = true;
    reverse_list(head, head, &flag);  

    return flag;  
}


int main()
{
    Node* head = NULL;
    Node* tail = head;

    int a;
    while(true)
    {
        cin >> a;
        if(a == -1)
        {
            break;
        }
        
        insert_tail(head, tail, a);
    }

    if(isPalindrome(head) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
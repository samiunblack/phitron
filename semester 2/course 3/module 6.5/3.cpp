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

    if(count % 2 == 1)
    {
        int half = (count / 2) + 1;

        temp = head;

        int i = 1;
        while(i < half)
        {
            temp = temp->next;
            i++;
        }
        cout << temp->val;
    }
    else
    {
        int h1 = count / 2;
        int h2 = (count/2) + 1;

        temp  = head;
        int i = 1;
        while(i < h2)
        {
            temp = temp->next;

            if(i == h1 - 1)
            {
                cout << temp->val << " ";
            }
            i++;
        }
        cout << temp->val;
    }

}
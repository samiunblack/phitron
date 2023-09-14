#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};


int binaryToInteger(int n, Node *head) {
    string binary;

    while(head != NULL)
    {
        binary.push_back(head->data + '0');
        head = head->next;
    }

    int number = stoi(binary, 0, 2);

    return number;
}
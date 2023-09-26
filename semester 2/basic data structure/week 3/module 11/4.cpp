#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverse(ListNode*& head, ListNode* curr)
    {
        if(curr != NULL && curr->next == NULL)
        {
            head = curr;
            return head;
        }
        
        if(curr != NULL)
        {
            ListNode* node = reverse(head, curr->next); 
            node->next = curr;
            curr->next = NULL;
        }
        
        

        return curr;
    }
    
    ListNode* reverseList(ListNode* head) {
        reverse(head, head);

        return head;
    }
};
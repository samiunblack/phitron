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
    void reverse(ListNode* curr, ListNode* &start, bool *flag)
    {
        if(curr == NULL)
        {
            return;
        }

        reverse(curr->next, start, flag);

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
    bool isPalindrome(ListNode* head) {
        bool flag = true;
        reverse(head, head, &flag);  

        return flag;  
    }
};
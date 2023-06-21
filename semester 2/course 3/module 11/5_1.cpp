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
    void reverse(ListNode* &head, ListNode* curr)
    {
        if(curr != NULL && curr->next == NULL)
        {
            head = curr;
            return;
        }

        if(curr != NULL)
        {
            reverse(head, curr->next);
            curr->next->next = curr;
            curr->next = NULL;
        }
    }
    bool isPalindrome(ListNode* head) {
        ListNode* head_reverse = NULL;

        ListNode* tmp = head;
        ListNode* tmp2 = head_reverse;

        while(tmp != NULL)
        {
            if(head_reverse == NULL)
            {
                head_reverse = new ListNode(tmp->val);
                tmp = tmp->next;
                tmp2 = head_reverse;
                continue;
            }

            tmp2->next = new ListNode(tmp->val);
            tmp2 = tmp2->next;
            tmp = tmp->next;
        }

        reverse(head_reverse, head_reverse);

        ListNode* t1 = head;
        ListNode* t2 = head_reverse;

        while(t2 != NULL)
        {
            if(t1->val != t2->val)
            {
                return false;
            }

            t1 = t1->next;
            t2 = t2->next;
        }
        

        return true;
    }
};
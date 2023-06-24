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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = head;

        for(auto i = tmp; i != NULL && i->next != NULL; i = i->next)
        {
            for(auto j = i->next; j != NULL; j = j->next)
            {
                if(i->val == j->val)
                {
                    i->next = i->next->next;
                }
            }
        }

        return head;    
    }
};
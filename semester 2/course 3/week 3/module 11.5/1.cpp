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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tmp = head;

        while(head != NULL && head->val == val)
        {
            head = head->next;
        }

        while(tmp != NULL && tmp->next != NULL)
        {
            while(tmp->next != NULL && tmp->next->val == val)
            {
                tmp->next = tmp->next->next;
            }

            tmp = tmp->next;
        }

        return head;
    }
};
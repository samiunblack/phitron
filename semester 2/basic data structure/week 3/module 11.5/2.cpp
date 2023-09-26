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
    int size(ListNode* head)
    {
        ListNode* tmp = head;
        int cnt = 0;

        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }

        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int pos = size(head) - n;

        ListNode* tmp = head;

        if(pos == 0)
        {
            head = head->next;
            return head;
        }

        for(int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }

        if(tmp != NULL && tmp->next != NULL)
        {
            tmp->next = tmp->next->next;
        }

        return head;
    }
};
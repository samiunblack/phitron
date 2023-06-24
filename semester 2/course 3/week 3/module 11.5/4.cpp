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
    ListNode* swapNodes(ListNode* head, int k) {
        int total = size(head);
        int pos_back = total - k;
        pos_back++;

        ListNode* firstNode = NULL;
        ListNode* secondNode = NULL;

        ListNode* tmp = head;

        for(int i = 1; i <= total; i++)
        {
            if(i == k)
            {
                firstNode = tmp;
            }
            if(i == pos_back)
            {
                secondNode = tmp;
            }

            tmp = tmp->next;
        }

        swap(firstNode->val, secondNode->val);

        return head;
    }
};
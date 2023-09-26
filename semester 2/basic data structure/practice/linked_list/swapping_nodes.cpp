#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int size(ListNode* tmp)
    {
        int cnt = 0;
        while(tmp != NULL)
        {
            tmp = tmp->next;
            cnt++;
        }

        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int sz = size(head);
        int stop = sz - k;

        ListNode* tmp = head;

        for(int i = 1; i <= stop; i++)
        {
            tmp = tmp->next;
        }

        ListNode* first = head;

        for(int i = 1; i < k; i++)
        {
            first = first->next;
        }

        int t = tmp->val;
        tmp->val = first->val;
        first->val = t;

        return head;
    }
};
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* curr = head;
        ListNode* next = head->next;
        ListNode* prev = NULL;

        ListNode* tmp = head;

        while(curr != NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = next;
            if(curr) next = curr->next;
        }

        return prev;
    }
};
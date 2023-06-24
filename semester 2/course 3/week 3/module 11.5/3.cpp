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
    ListNode* mergeNodes(ListNode* head) {
        bool start = false;

        ListNode* tmp = head;
        ListNode* ans = NULL;
        ListNode* ans_tmp = NULL;
        long long sum = 0;

        while(tmp != NULL)
        {
            if(start == false && tmp->val == 0)
            {
                start = true;
            }
            else if(start == true && tmp->val == 0)
            {
                if(ans == NULL)
                {
                    ans = new ListNode(sum);
                    ans_tmp = ans;
                }
                else
                {
                    ans_tmp->next = new ListNode(sum);
                    ans_tmp = ans_tmp->next;
                }

                sum = 0;
            }
            else
            {
                sum += tmp->val;
            }

            tmp = tmp->next;
        }

        return ans;
    }
};
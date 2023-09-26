#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insert_heap(vector<int> &v, int x)
    {
        v.push_back(x);

        int idx = v.size() - 1;
        int parent = (idx - 1) / 2;

        while(v[parent] > v[idx])
        {
            swap(v[parent], v[idx]);
            idx = parent;
            parent = (idx - 1) / 2;
        }
    }

    void delete_heap(vector<int> &v)
    {
        int idx = 0;

        swap(v[idx], v[v.size() - 1]);
        v.pop_back();

        while(true)
        {
            int left = idx * 2 + 1;
            int right = idx * 2 + 2;

            int cmp;

            if(left < v.size() && right < v.size())
            {
                if(v[left] < v[right])
                {
                    cmp = left;
                }
                else cmp = right;
            }
            else if(left < v.size())
            {
                cmp = left;
            }

            else if(right < v.size())
            {
                cmp = right;
            }
            else
            {
                break;
            }

            if(v[cmp] < v[idx])
            {
                swap(v[cmp], v[idx]);
                idx = cmp;
            }
            else
            {
                break;
            }
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> v;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            insert_heap(v, nums[i]);
        }

        for(int i = 0; i < nums.size(); i++)
        {
            ans.push_back(v[0]);
            delete_heap(v);
        }

        return ans;
    }
};
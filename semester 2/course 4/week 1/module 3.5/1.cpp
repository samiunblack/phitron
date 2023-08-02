#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sort(vector<int> &nums, int l, int r)
    {
        if(l < 0 || r >= nums.size()) return {};

        if(l == r) return {nums[l]};

        int mid = (l + r) / 2;
        vector<int> left = sort(nums, l, mid);
        vector<int> right = sort(nums, mid + 1, r);

        int p1 = 0; int p2 = 0;
        vector<int> sorted;

        while(p1 < left.size() && p2 < right.size())
        {
            if(left[p1] < right[p2])
            {
                sorted.push_back(left[p1]);
                p1++;
            }
            else
            {
                sorted.push_back(right[p2]);
                p2++;
            }
        }

        while(p1 < left.size())
        {
            sorted.push_back(left[p1]);
            p1++;
        }

        while(p2 < right.size())
        {
            sorted.push_back(right[p2]);
            p2++;
        }

        return sorted;
    }
    void merge_sort(vector<int> &nums)
    {
        nums = sort(nums, 0, nums.size() - 1);
    }

    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums);

        return nums;
    }
};
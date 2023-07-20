#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> l;

        l.push_back(0);


        for(int i = 1; i < nums.size(); i++)
        {
            l.push_back(l[i - 1] + nums[i - 1]);
        }

        vector<int> r(nums.size(), 0);

        for(int i = nums.size() - 2; i >= 0; i--)
        {
            r[i] = r[i + 1] + nums[i + 1];
        }

        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = abs(l[i] - r[i]);
        }

        return nums;
    }
};
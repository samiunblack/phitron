#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> v;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                v.push_back(i);
            }
        }    

        return v;
    }
};

int main()
{
    
}
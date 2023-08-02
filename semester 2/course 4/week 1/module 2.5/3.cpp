#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;

        int l = 0;
        int r = nums.size() - 1;
        
    
        while(l <= r)
        {
            int mid = (l + r)/2;

            if(nums[mid] < 0)
            {
                if(mid - 1 >=  0)
                {
                    if(nums[mid - 1] < 0)
                    {
                        r = mid - 1;
                    }
                    else if(nums[mid - 1] > 0)
                    {
                        neg += nums.size() - mid;
                        pos += nums.size() - neg;
                        break;
                    }
                    else if(nums[mid - 1] == 0)
                    {
                        neg += nums.size() - mid;
                        r = mid - 1;
                        l = 0;
                    }
                    else if(mid == nums.size() - 1)
                    {
                        neg += 1;
                        break;
                    }
                }
                else if(mid - 1 < 0)
                {
                    neg += nums.size();
                    break;
                }
            }
            else if(nums[mid] > 0)
            {
                if()
            }
        }
    }
};

int main()
{
    
}
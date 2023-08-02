#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        long long r = nums.size();

        long long sum = (r * (r + 1))/2;

        long long s = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            s += (long long) nums[i];
        }

        return sum - s;
    }
};

int main()
{
    
}
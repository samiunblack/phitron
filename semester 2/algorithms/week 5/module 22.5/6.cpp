#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int n)
{
    if(n <= 0) return 0;

    int op1 = solve(nums, n - 2) + nums[n - 1];
    int op2 = solve(nums, n - 1);

    return max(op1, op2);
}

int main()
{
    vector<int> nums = {2,7,9,3,1};

    cout << max(solve(nums, nums.size()), solve(nums, nums.size() - 1));
}
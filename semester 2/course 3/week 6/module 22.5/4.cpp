#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void in_order(TreeNode* root, vector<int> &v)
    {
        if(!root) return;

        in_order(root->left, v);
        v.push_back(root->val);
        in_order(root->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        in_order(root, nums);

        int l = 0;
        int r = nums.size() - 1;

        while(l < r)
        {
            int sum = nums[l] + nums[r];
            if(sum == k) return true;

            else if(sum < k) l++;
            else if(sum > k) r--;
        }

        return false;
    }
};
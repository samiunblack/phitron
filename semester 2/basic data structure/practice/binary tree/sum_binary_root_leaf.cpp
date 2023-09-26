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
    vector<string> nums;

    void pre_order(TreeNode* root, string s)
    {
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL)
        {
            s.push_back(root->val + '0');
            if(s != "") nums.push_back(s);
            s = "";
        }

        s.push_back(root->val + '0');
        pre_order(root->left, s);
        pre_order(root->right, s);
    }

    int sumRootToLeaf(TreeNode* root) {
        pre_order(root, "");
        int sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += stoi(nums[i], 0, 2);
        }

        return sum;
    }

};
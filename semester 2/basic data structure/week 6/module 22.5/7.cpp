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
    int mn = INT_MAX;

    void pre_order(TreeNode* root, TreeNode* node)
    {
        if(!root) return;
        if(root == node) return;
        if(!node) return;

        mn = min(mn, abs(root->val - node->val));

        pre_order(root->left, node);
        pre_order(root->right, node);
    }

    void getMin(TreeNode* root, TreeNode* curr)
    {
        if(!root) return;
        if(!curr) return;

        pre_order(root, curr);
        
        getMin(root, curr->left);
        getMin(root, curr->right);
    }

    int getMinimumDifference(TreeNode* root) {
        mn = INT_MAX;

        getMin(root, root);

        return mn;
    }
};
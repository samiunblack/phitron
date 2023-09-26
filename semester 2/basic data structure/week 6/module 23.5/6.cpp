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
    void traverse(TreeNode* root, vector<int> &v)
    {
        if(!root) return;

        traverse(root->left, v);
        v.push_back(root->val);
        traverse(root->right, v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        traverse(root, v);

        return v;
    }
};
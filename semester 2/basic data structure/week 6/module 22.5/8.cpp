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
    TreeNode* tree =new TreeNode(0);
    TreeNode* tmp = tree;
    void in_order(TreeNode* root, TreeNode* &tree, TreeNode* &tmp)
    {
        if(!root) return;

        in_order(root->left, tree, tmp);
        
        if(tmp) {
            tmp->right = new TreeNode(root->val);
            tmp = tmp->right;
        }

        in_order(root->right, tree, tmp);
    }

    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* tree = new TreeNode(0);
        TreeNode* tmp = tree;
        in_order(root, tree, tmp);
        return tree->right;
    }
};
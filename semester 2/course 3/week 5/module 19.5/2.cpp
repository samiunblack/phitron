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
    bool isUnivalTree(TreeNode* root) {
        if(!root) return true;

        if((root->left && root->val != root->left->val) || (root->right && root->right->val != root->val)) return false;

        bool l = isUnivalTree(root->left);
        bool r = isUnivalTree(root->right);

        if(l == false || r == false) return false;
        else return true;    
    }
};
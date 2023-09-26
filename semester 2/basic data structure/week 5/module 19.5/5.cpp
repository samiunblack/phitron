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
    int tilt = 0;
    int sum(TreeNode* root)
    {
        if(!root) return 0;

        int l = sum(root->left);
        int r = sum(root->right);

        tilt += abs(l - r);

        return root->val + l + r;
    }

    

    int findTilt(TreeNode* root) {

        if(!root) return 0;

        tilt = 0;
        sum(root);
        return tilt;
    }
};
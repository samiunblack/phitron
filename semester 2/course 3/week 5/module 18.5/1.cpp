#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};


void postOrder(TreeNode *root, vector<int> &v)
{
    if(root == NULL) return;

    postOrder(root->left, v);
    postOrder(root->right, v);

    v.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root)
{
    vector<int> v;
    postOrder(root, v);

    return v;
}

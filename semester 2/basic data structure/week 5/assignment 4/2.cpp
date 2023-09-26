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
            this->left = NULL;
            this->right = NULL;
        }
};

TreeNode* input_tree()
{
    TreeNode* root;

    int val;
    cin >> val;

    if(val == -1) root = NULL;
    else root = new TreeNode(val);

    queue<TreeNode*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        TreeNode* curr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        TreeNode* left;
        TreeNode* right;

        if(l == -1) left = NULL;
        else left = new TreeNode(l);

        if(r == -1) right = NULL;
        else right = new TreeNode(r);

        if(left) curr->left = left;
        if(right) curr->right = right;

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }

    return root;
}

void leaf(TreeNode* root, int* mx, int* mn)
{
    if(!root) return;

    if(!root->left && !root->right)
    {
        int mX = *mx;
        int mN = *mn;
        *mx = max(mX, root->val);
        *mn = min(mN, root->val);
    }

    leaf(root->left, mx, mn);
    leaf(root->right, mx, mn);
}

int main()
{
    TreeNode* root = input_tree();
    int mx = INT_MIN;
    int mn = INT_MAX;

    leaf(root, &mx, &mn);
    cout << mx << " " << mn;
}
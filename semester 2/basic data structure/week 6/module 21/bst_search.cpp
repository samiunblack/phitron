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

bool search(TreeNode* root, int x)
{
    if(root == NULL) return false;

    if(root->val > x)
    {
        return search(root->left, x);
    }

    else if(root->val < x)
    {
        return search(root->right, x);
    }

    else
    {
        return true;
    }
}

int main()
{
    TreeNode* root = input_tree();
    bool found = search(root, 12);

    if(found) cout << "FOUND";
    else cout << "NOT FOUND";
}
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

int num_of_nodes(TreeNode* root)
{
    if(root == NULL) return 0;

    int left = num_of_nodes(root->left);
    int right = num_of_nodes(root->right);

    return 1 + left + right;
}

int main()
{
    TreeNode* root = input_tree();
    cout << num_of_nodes(root);
}
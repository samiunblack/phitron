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

void insert_node(TreeNode* &root, TreeNode* node)
{
    if(root == NULL) {
        root = node;
        return;
    }

    if(root->val > node->val)
    {
        insert_node(root->left, node);
    }
    else
    {
        insert_node(root->right, node);
    }
}

void pre_order(TreeNode* root)
{
    if(!root) return;

    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
}

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

int main()
{
    TreeNode* root = input_tree();
    TreeNode* node = new TreeNode(36);
    insert_node(root, node);
    pre_order(root);
}
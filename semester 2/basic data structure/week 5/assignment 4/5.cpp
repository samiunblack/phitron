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

void pre_order(TreeNode* root, int* node)
{
    if(root == NULL) return;

    *node += 1;

    pre_order(root->left, node);
    pre_order(root->right, node);
}

long long maxHeight(TreeNode* root)
{
    if(!root) return 0;

    long long l = maxHeight(root->left);
    long long r = maxHeight(root->right);

    return 1 + max(l, r);
}

int main()
{
    TreeNode* root = input_tree();
    long long height = maxHeight(root);
    int node = 0;
    pre_order(root, &node);

    long long perf = pow(2, height) - 1;

    if(node == perf)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
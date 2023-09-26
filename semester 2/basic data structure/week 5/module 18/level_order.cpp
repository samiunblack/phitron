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

void level_order(TreeNode* root)
{
    queue<TreeNode*> q;

    if(root) q.push(root);

    while(!q.empty())
    {
        TreeNode* curr = q.front();
        q.pop();

        cout << curr->val << " ";

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}

int main()
{
    TreeNode* root = new TreeNode(10);

    TreeNode* a = new TreeNode(20);
    TreeNode* b = new TreeNode(30);
    TreeNode* c = new TreeNode(40);
    TreeNode* d = new TreeNode(50);
    TreeNode* e = new TreeNode(60);
    TreeNode* f = new TreeNode(70);
    TreeNode* g = new TreeNode(80);
    TreeNode* h = new TreeNode(90);
    TreeNode* i = new TreeNode(100);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;
    h->right = i;

    b->right = d;
    d->left = f;
    d->right = g;

    level_order(root);
}
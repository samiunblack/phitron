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

void in_order(TreeNode* root)
{
    if(root == NULL) return;

    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);


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

    in_order(root);
}
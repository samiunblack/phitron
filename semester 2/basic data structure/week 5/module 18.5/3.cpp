#include <bits/stdc++.h> 
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};


void inOrder(TreeNode* root, vector<int> &v)
{
    if(!root) return;

    inOrder(root->left, v);
    v.push_back(root->data);
    inOrder(root->right, v);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> v;
    inOrder(root, v);

    return v;
}
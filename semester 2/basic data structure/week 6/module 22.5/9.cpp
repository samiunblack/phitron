#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class TreeNode {
    public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void insert_node(TreeNode<int>* &root, TreeNode<int>* node)
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

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    TreeNode<int>* node = new TreeNode<int>(val);
    insert_node(root, node);
    return root;
}
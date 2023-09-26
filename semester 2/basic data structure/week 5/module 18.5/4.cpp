#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class BinaryTreeNode {
    public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};


vector<int> levelOrder(BinaryTreeNode<int>* root)
{
    queue<BinaryTreeNode<int>*> q;
    vector<int> v;

    if(root) q.push(root);

    while(!q.empty())
    {
        BinaryTreeNode<int>* curr = q.front();
        q.pop();

        v.push_back(curr->val);

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }

    return v;
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    return levelOrder(root);
}
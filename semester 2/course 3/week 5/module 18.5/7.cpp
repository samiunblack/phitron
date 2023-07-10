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


int maxDepth(TreeNode<int> *root) {
    if(!root) return -1;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    return 1 + max(left, right);
}
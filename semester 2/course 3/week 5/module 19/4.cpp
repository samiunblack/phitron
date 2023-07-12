#include <bits/stdc++.h>
using namespace std;

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };


int maxHeight(TreeNode<int>* root, int* d)
{
    if(!root) return 0;

    int l = maxHeight(root->left, d);
    int r = maxHeight(root->right, d);

    *d = max(*d, (l + r));

    return max(l, r) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	int d = 0;
    maxHeight(root, &d);
    return d;
}

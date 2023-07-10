#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class BinaryTreeNode 
{
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
};


long long leftSum(BinaryTreeNode<int> *root)
{
	if(root == NULL) return 0;

	if(root->left)
	{
		return root->left->data;
	}
	if(root->right)
	{
		return leftSum(root->right);
	}
}
#include <bits/stdc++.h>
using namespace std;

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};


void preOrder(BinaryTreeNode<int> *root) {
	if(!root)
	{
		return;
	}

	cout << root->data << " ";

	preOrder(root->left);
	preOrder(root->right);
}
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

int noOfLeafNodes(BinaryTreeNode<int> *root){
    if(!root) return 0;

    if(!root->left && !root->right) return 1;

    return noOfLeafNodes(root->left) + noOfLeafNodes(root->right);
}
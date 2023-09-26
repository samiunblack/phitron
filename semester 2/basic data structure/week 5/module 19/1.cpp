#include<bits/stdc++.h>
using namespace std;

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(!root) return false;

    if(root->data == x) return true;

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    
    return l || r;
}
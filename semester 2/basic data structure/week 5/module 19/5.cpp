#include <bits/stdc++.h> 
using namespace std;
    
    template <typename T>
    class BinaryTreeNode
    {
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


bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    if(!root) return false;

    if(!root->left && !root->right) return true;
    if(!root->left || !root->right) return false;
    
    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);

    if(l == false || r == false) return false;
    else return true;
}
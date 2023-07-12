#include <bits/stdc++.h> 
using namespace std;


    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };


int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*, int>> q;

    if(root) q.push({root, 1});

    while(!q.empty())
    {
        TreeNode<int>* curr = q.front().first;
        int currLevel = q.front().second;
        q.pop();

        if(curr->val == searchedValue) return currLevel;

        if(curr->left) q.push({curr->left, currLevel + 1});
        if(curr->right) q.push({curr->right, currLevel + 1});
    }

    return 0;
}

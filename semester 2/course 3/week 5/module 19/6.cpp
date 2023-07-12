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


vector<int> reverseLevelOrder(TreeNode<int> *root){
    queue<TreeNode<int>*> q;

    if(root) q.push(root);

    vector<int> ans;

    while(!q.empty())
    {
        TreeNode<int>* curr = q.front();
        q.pop();

        ans.push_back(curr->val);

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }

    
    reverse(ans.begin(), ans.end());

    return ans;
}
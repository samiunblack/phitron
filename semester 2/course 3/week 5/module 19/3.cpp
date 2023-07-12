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


vector<int> getLeftView(TreeNode<int> *root)
{
    queue<TreeNode<int>*> q;

    if(root) q.push(root);

    int level;
    int out = true;

    vector<int> v;

    while(!q.empty())
    {
        level = q.size();

        for(int i = 0; i < level; i++)
        {
            TreeNode<int>* curr = q.front();
            q.pop();

            if(out == true)
            {
                v.push_back(curr->data);
                out = false;
            }
            
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        level++;
        out = true;
    }

    return v;
}
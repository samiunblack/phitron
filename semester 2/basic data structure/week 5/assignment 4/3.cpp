#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

TreeNode* input_tree()
{
    TreeNode* root;

    int val;
    cin >> val;

    if(val == -1) root = NULL;
    else root = new TreeNode(val);

    queue<TreeNode*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        TreeNode* curr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        TreeNode* left;
        TreeNode* right;

        if(l == -1) left = NULL;
        else left = new TreeNode(l);

        if(r == -1) right = NULL;
        else right = new TreeNode(r);

        if(left) curr->left = left;
        if(right) curr->right = right;

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }

    return root;
}

stack<int> level_order(TreeNode* root)
{
    queue<TreeNode*> q;
    stack<int> st;

    if(root) q.push(root);

    while(!q.empty())
    {
        int level = q.size();
        vector<int> v;
        for(int i = 0; i < level; i++)
        {
            TreeNode* curr = q.front();
            q.pop();

            v.push_back(curr->val);

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        for(int i = v.size() - 1; i >= 0; i--)
        {
            st.push(v[i]);
        }
        
    }

    return st;
}

int main()
{
    TreeNode* root = input_tree();
    stack<int> v = level_order(root);


    while(!v.empty())
    {
        cout << v.top() << " ";
        v.pop();
    }
}
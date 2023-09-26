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

void level_order(TreeNode* root, int x)
{
    queue<TreeNode*> q;

    if(root) q.push(root);
    int level = q.size();
    level--;
    bool found = false;

    while(!q.empty())
    {
        int l = q.size();
        if(level == x)
        {
            while(!q.empty())
            {
                cout << q.front()->val << " ";
                q.pop();
            }
            found = true;
            break;
        }
        for(int i = 0; i < l; i++)
        {
            TreeNode* curr = q.front();
            q.pop();


            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        level++;
    }

    if(!found) cout << "Invalid";

}

int main()
{
    TreeNode* root = input_tree();
    int x;
    cin >> x;
    level_order(root, x);
}
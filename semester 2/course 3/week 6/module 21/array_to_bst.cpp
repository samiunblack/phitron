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

void level_order(TreeNode* root)
{
    queue<TreeNode*> q;

    if(root) q.push(root);

    while(!q.empty())
    {
        int level = q.size();

        for(int i = 0; i < level; i++)
        {
            TreeNode* curr = q.front();
            q.pop();

            cout << curr->val << " ";

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        cout << endl;
    }
}

TreeNode* convert(vector<int> &v, int l, int r)
{
    if(l > r) return NULL;
    int mid = (l + r) / 2;

    TreeNode* root = new TreeNode(v[mid]);
    TreeNode* left = convert(v, l, mid - 1);
    TreeNode* right = convert(v, mid + 1, r);

    root->left = left;
    root->right = right;

    return root;
}

int main()
{
    vector<int> v = {2, 5, 8, 12, 15, 18};

    TreeNode* root = convert(v, 0, v.size() - 1);

    level_order(root);
}
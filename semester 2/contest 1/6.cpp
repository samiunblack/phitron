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

void level_order(TreeNode* root, priority_queue<int> &pq)
{
    queue<TreeNode*> q;

    if(root) q.push(root);

    while(!q.empty())
    {
        TreeNode* curr = q.front();
        q.pop();

        pq.push(curr->val);

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}

int main()
{
    priority_queue<int> pq;
    TreeNode* root = input_tree();
    level_order(root, pq);

    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;
        if(x == 2)
        {
            if(!pq.empty())
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else if(x == 1)
        {
            int a;
            cin >> a;
            pq.push(a);
        }
    }
}
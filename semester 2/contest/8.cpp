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

void level_order(int n)
{
    TreeNode* root = new TreeNode(1);
    int val = 1;
    int id = 1;

    queue<TreeNode*> q;
    int l = 0;

    q.push(root);

    while(id < n)
    {
        int level = q.size();
        for(int i = 0; i < level; i++)
        {
            TreeNode* curr = q.front();
            l = val;

            q.pop();

            curr->left = new TreeNode(val);
            curr->right = new TreeNode(val);

            q.push(curr->left);
            q.push(curr->right);
        }
        
        val = l * 2;
        id++;
        
    }

    long long sum = 0;

    while(!q.empty())
    {
        sum += (long long) q.front()->val;
        q.pop();
    }

    cout << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    level_order(n);
}
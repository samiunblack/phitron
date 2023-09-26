#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void level_order(TreeNode* root, vector<double>& arr)
    {
        queue<TreeNode*> q;
        if(root) q.push(root);

        while(!q.empty())
        {
            int nodes = q.size();
            double sum = 0;
            for(int i = 0; i < nodes; i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                sum += (double) curr->val;

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            arr.push_back(sum / (nodes * 1.0));
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> arr;

        level_order(root, arr);

        return arr;
    }
};
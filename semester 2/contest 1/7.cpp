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
    int ix = 1;
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
            l = curr->val;
            q.pop();

            curr->left = new TreeNode(ix);
            curr->right = new TreeNode(ix);

            q.push(curr->left);
            q.push(curr->right);
        }
        
        ix += l;
        id++;
    }

    int sum = 0;

    while(!q.empty())
    {
        sum += q.front()->val;
        q.pop();
    }

    cout << sum << endl;
}

int main()
{
    string s;
    cin >> s;

    string str = "";
    bool d = 0;
    int num = 0;

    string a;

    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            d = 1;
            num = s[i] - '0';
        }

        else if(d == 1)
        {
            if(isalpha(s[i]))
            {
                a.push_back(s[i]);
            }
            else
            {
                d = 0;
                for(int i = 0; i < num; i++)
                {
                    str += a;
                }
                str.push_back(s[i]);
                a = "";
            }
        }
    }

    if(a.size())
    {
        for(int i = 0; i < num; i++)
                {
                    str += a;
                }
    }

    cout << str << endl;
}
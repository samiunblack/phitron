#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    
    int idx = 0;

    swap(v[idx], v[v.size() - 1]);
    v.pop_back();

    int left = idx * 2 + 1;
    int right = idx * 2 + 2;

    while(true)
    {
        int cmp;
        if(left < v.size() && right < v.size())
        {
            if(v[left] > v[right])
            {
                cmp = left;
            }
            else
            {
                cmp = right;
            }
        }

        else if(left < v.size())
        {
            cmp = left;
        }
        else if(right < v.size())
        {
            cmp = right;
        }
        else
        {
            break;
        }

        if(v[cmp] > v[idx])
        {
            swap(v[cmp], v[idx]);
            idx = cmp;
            left = idx * 2 + 1;
            right = idx * 2 + 2;
        }
        else
        {
            break;
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
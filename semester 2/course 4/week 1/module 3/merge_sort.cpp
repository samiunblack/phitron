#include <bits/stdc++.h>
using namespace std;

vector<int> sort(vector<int> &v, int l, int r)
{
    if(l < 0 || r >= v.size())
    {
        return {};
    }

    if(l == r) return {v[l]};

    int mid = (l + r)/2;

    vector<int> left = sort(v, l, mid);
    vector<int> right = sort(v, mid + 1, r);

    int p1 = 0;
    int p2 = 0;

    vector<int> s_v;

    while(p1 < left.size() && p2 < right.size())
    {
        if(left[p1] < right[p2])
        {
            s_v.push_back(left[p1]);
            p1++;
        }
        else
        {
            s_v.push_back(right[p2]);
            p2++;
        }
    }

    while(p1 < left.size())
    {
        s_v.push_back(left[p1]);
        p1++;
    }

    while(p2 < right.size())
    {
        s_v.push_back(right[p2]);
        p2++;
    }

    return s_v;
}

void merge_sort(vector<int> &v)
{
    v = sort(v, 0, v.size() - 1);
}

int main()
{
    vector<int> v = {12, 7, 5, 19, 2, 8, 21, 3};

    merge_sort(v);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
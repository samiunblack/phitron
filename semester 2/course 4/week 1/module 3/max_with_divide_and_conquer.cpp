#include <bits/stdc++.h>
using namespace std;

int max_conquer(vector<int> &v, int l, int r)
{
    if(l < 0 || r >= v.size()) return INT_MIN;

    if(l == r) return v[l];

    int mid = (l + r)/2;

    int left = max_conquer(v, l, mid);
    int right = max_conquer(v, mid + 1, r);

    return max(left, right);
}

int main()
{
    vector<int> v = {2, 1, 0, -4, 6, 3, 7, 5, 10};

    cout << max_conquer(v, 0, v.size() - 1);
}
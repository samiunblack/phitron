#include <bits/stdc++.h>
using namespace std;

bool isPos(int i)
{
    return i > 0;
}

bool isNeg(int i)
{
    return i < 0;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    replace_if(v.begin(), v.end(), isPos, 1);
    replace_if(v.begin(), v.end(), isNeg, 2);


    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
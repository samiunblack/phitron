#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> adj_list(10);

    int n;
    cin >> n;
    int e;
    cin >> e;

    while(e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
    }
}
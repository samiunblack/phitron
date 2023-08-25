#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e5 + 7;
const int INF = 1e9 + 9;


int visited[N];
vector<int> dist(N, INF);

int main()
{
    int m;
    cin >> m;

    map<int, vector<int>> mp; 
    set<int> a;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        mp[u].push_back(v);

        a.insert(u);
    }


    for(auto i : a)
    {
        sort(mp[i].begin(), mp[i].end());

        for(auto j : mp[i])
        {
            cout << i << " " << j << endl;
        }
    }
}
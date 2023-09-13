#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
vector<pair<int, int>> cycle;

void reset()
{
    for(int i = 1; i <= N; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsu_find(int n)
{
    while(parent[n] != -1)
    {
        n = parent[n];
    }

    return n;
}

void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if(leaderA != leaderB)
    {
        if(parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
    else
    {
       cycle.push_back({a, b}); 
    }
}

vector<pair<int, int>> setRoad(int n)
{
    vector<int> leader;

    for(int i = 1; i <= n; i++)
    {
        if(parent[i] == -1)
        {
            leader.push_back(i);
        }
    }

    vector<pair<int, int>> ans;

    for(int i = 1; i < leader.size(); i++)
    {
        ans.push_back({leader[0], leader[i]});
    }

    return ans;
}

int main()
{
    reset();

    int n, m;
    cin >> n >> m;
    

    while(m--)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
    }

    vector<pair<int, int>> leader = setRoad(n);

    cout << cycle.size() << endl;

}   
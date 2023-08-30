#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
bool cycle = false;

void reset()
{
    for(int i = 1; i <= N; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }

    cycle = false;
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
        cycle = true;
    }
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

    if(cycle == true)
    {
        cout << "Cycle Detected";
    }
    else
    {
        cout << "No Cycle Detected";
    }
}   
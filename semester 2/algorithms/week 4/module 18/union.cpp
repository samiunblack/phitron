#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];

void reset()
{
    for(int i = 1; i <= N; i++)
    {
        parent[i] = -1;
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
        parent[leaderB] = leaderA;
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

    for(int i = 1; i <= n; i++)
    {
        cout << "Leader of " << i << " : ";
        cout << parent[i] << endl;
    }
}   
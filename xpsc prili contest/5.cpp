#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;


const int N = 1e5 + 5;
vector<pii> v[N];
bool vis[N];


class Edge
{
    public:
        int a, b, w;
        Edge(int a, int b, int w)
        {
            this->a = a;
            this->b = b;
            this->w = w;
        }
};

class cmp
{
    public:
        bool operator()(Edge a, Edge b)
        {
            return a.w > b.w;
        }
};


void prims(int s, int n, int e)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    vector<Edge> edgeList;

    pq.push(Edge(s, s, 0));
    int cnt = 0;

    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();


        int a = parent.a;
        int b = parent.b;
        int w = parent.w;


        if (vis[b]) continue;

        vis[b] = true;
        cnt++;

        edgeList.push_back(parent);


        for (int i = 0; i < v[b].size(); i++)
        {
            pii child = v[b][i];
            if (!vis[child.first]) pq.push(Edge(b, child.first, child.second));
        }
    }


    edgeList.erase(edgeList.begin());
    long long sum = 0;


    for (Edge val : edgeList)
    {
        sum += (long long)(val.w);
    }


    if (cnt == n)
    {
        cout << e - (n - 1)  << " " << sum << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }
}


int main()
{
    int n, e;
    cin >> n >> e;

    for(int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }


    prims(1, n, e);
}
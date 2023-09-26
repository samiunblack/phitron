#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

int adj_mat[N][N];
vector<int> adj[N];


int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> adj_mat[i][j];

            if(adj_mat[i][j] == 1)
            {
                adj[i].push_back(j);
            }
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cout << "List " << i << " : ";

        for(auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }    
}
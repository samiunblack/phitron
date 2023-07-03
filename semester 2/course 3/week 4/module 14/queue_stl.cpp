#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> que;
    
    int n;
    cin >> n;

    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        que.push(a);
    }

    while(!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
}
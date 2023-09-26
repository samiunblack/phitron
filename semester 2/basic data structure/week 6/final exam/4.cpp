#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }

    int q;
    cin >> q;

    while(q--)
    {
        int i;
        cin >> i;

        if(i == 0)
        {
            int x;
            cin >> x;

            pq.push(x);
            cout << pq.top() << endl;
        }

        if(i == 1)
        {
            if(pq.empty()) cout << "Empty" << endl;
            else
            cout << pq.top() << endl;
        }

        if(i == 2)
        {
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if(pq.empty()) cout << "Empty" << endl;
                else
                cout << pq.top() << endl;
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;

    while(true)
    {
        int c;
        cin >> c;

        if(c == 0)
        {
            int val;
            cin >> val;

            pq.push(val);
        }

        else if(c == 1)
        {
            pq.pop();
        }

        else if(c == 2)
        {
            cout << pq.top() << endl;
        }

        else break;
    }
}
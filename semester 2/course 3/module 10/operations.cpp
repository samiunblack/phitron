#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1 = {30, 20, 40, 10, 60, 50, 70};

    l1.remove(10);
    l1.sort();
    l1.sort(greater<int>());

    l1.reverse();

    for(auto x : l1)
    {
        cout << x << " ";
    }
}
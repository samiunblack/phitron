#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1 = {10, 20, 30, 40, 50, 60, 70};
    list<int> l2 = {40, 50, 60};

    l1.push_back(100);
    l1.push_front(5);

    l1.pop_back();
    l1.pop_front();

    l1.insert(next(l1.begin(), 2), 100);
    l1.erase(next(l1.begin(), 2), next(l1.begin(), 6));

    //replace(l1.begin(), l1.end(), 30, 100);

    for(auto x : l1)
    {
        cout << x << " ";
    }
}
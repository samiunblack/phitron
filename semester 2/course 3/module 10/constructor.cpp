#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;
    list<int> l2(10);
    list<int> l3(10, 5);
    list<int> l4(l3);

    int arr[5] = {1, 2, 3, 4, 5};
    list<int> l5(arr, arr + 5);

    for(int x: l5)
    {
        cout << x << " ";
    }
}
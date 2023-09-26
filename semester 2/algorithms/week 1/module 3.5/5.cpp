#include <bits/stdc++.h> 
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    set<int, greater<int>> s;

    for(int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }

    if(s.size() == 1) return -1;
    else{
        auto it = s.begin();
        it++;
        return *it;
    }
}
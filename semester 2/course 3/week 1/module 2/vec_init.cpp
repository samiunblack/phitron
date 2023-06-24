#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {6, 7, 8, 9, 10};

    vector<int> v1 = {1, 2, 3, 4, 5};

    vector<int> v2(5);
    vector<int> v3(5, 0);

    vector<int> v4(v1);

    vector<int> v5(arr, arr + 5);

    for(int i = 0; i < 5; i++)
    {
        cout << v5[i] << endl;
    }
}
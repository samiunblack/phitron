#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    int sort_arr[3];

    for(int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;

        arr[i] = a;
        sort_arr[i] = a;
    }

    sort(sort_arr, sort_arr + 3);

    for(int i = 0; i < 3; i++)
    {
        cout << sort_arr[i] << "\n";
    }

    cout << "\n";

    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << "\n";
    }

}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    int min_idx = 0;
    int max_idx = 0;


    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }

        if(arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
    }

    swap(arr[max_idx], arr[min_idx]);
    

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
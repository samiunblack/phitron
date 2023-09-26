#include <bits/stdc++.h>
using namespace std;

int getFourthLargest(int arr[], int n)
{
    sort(arr, arr + n, greater<int>());

    if(n < 4) return -2147483648;
    else return arr[3];
}
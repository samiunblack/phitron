#include <bits/stdc++.h>
using namespace std;

int* get_arr(int n)
{
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    return a;
}


int main()
{
    int n;
    cin >> n;

    int *a = get_arr(n);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
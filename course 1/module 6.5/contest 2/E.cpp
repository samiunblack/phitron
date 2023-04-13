#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long row = n / 4;
    long long seats_end = ((row + 1) * 4) - 1;
    long long seats_start = row * 4;

    cout << row << " ";

    if(row % 2 == 0)
    {
        long long j = 0;
        for(long long i = seats_start; i <= seats_end; i++)
        {
            if(i == n)
            {
                cout << j;
                break;
            }
            else 
            {
                j++;
            }
        }
    }

    else {
        long long j = 3;
        for(long long i = seats_start; i <= seats_end; i++)
        {
            if(i == n)
            {
                cout << j;
                break;
            }
            else{
                j--;
            }
        }
    }
}
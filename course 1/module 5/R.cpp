#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int year = n / 365;
    int month = (n - (365 * year)) / 30;
    int days = n - ((month * 30) + (365 * year));

    cout << year << " years" << "\n";
    cout << month << " months" << "\n";
    cout << days << " days" << "\n";
}
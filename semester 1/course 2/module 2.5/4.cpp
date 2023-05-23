#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long sum = n + m;
    long long multiple = n * m;
    long long sub = n - m;

    cout << n << " + " << m << " = " << sum << endl;
    cout << n << " * " << m << " = " << multiple << endl;
    cout << n << " - " << m << " = " << sub << endl;
}
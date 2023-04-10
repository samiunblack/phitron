#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, p;
    cin >> x >> p;

    double dis = 100 - x;
    double real = (100 * p) / dis;

    printf("%.2lf", real);
}
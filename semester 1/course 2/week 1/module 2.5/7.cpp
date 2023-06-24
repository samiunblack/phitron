#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int min_n = min(c, min(a, b));
    int max_n = max(c, max(a, b));

    cout << min_n << " " << max_n;
}
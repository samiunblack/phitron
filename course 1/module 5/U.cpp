#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    int x = n;

    if(n - x == 0){
        cout << "int " << x;
    }
    else {
        cout << "float " << x << " " << n - x;
    }
}
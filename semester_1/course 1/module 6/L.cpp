#include <iostream>
#include <algorithm>
// #include<numeric> for C++17
 
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;

    cout << __gcd(a, b) << endl; // gcd(6,20) for C++17
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string* a = new string;
    string* b = new string;

    cin >> *a >> *b;
    if(a->find(*b) != -1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
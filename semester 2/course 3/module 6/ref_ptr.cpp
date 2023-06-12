#include <bits/stdc++.h>
using namespace std;

void fun(int* &val)
{
    val = NULL;
}

int main()
{
    int val = 10;
    int* ptr = &val;
    fun(ptr);

    cout << ptr;
}
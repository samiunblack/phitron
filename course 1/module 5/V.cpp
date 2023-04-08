#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char sym;
    cin >> a >> sym >> b;

    if(sym == '>')
    {
        printf("%s", a > b ? "Right" : "Wrong");
    }
    else if(sym == '<')
    {
        printf("%s", a < b ? "Right" : "Wrong");
    }
    else
    {
        printf("%s", a == b ? "Right" : "Wrong");
    }
}
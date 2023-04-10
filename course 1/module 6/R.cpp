#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a <= 0 || b <= 0)
        {
            break;
        }

        if(a > b)
        {
            int temp = b;
            b = a;
            a = temp;
        }

        int sum = 0;

        for(int i = a; i <= b; i++)
        {
            printf("%d ", i);
            sum += i;
        }

        cout << "sum =" << sum << "\n";
    }
}
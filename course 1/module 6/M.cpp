#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool no_lucky = true;

    for(int i = a; i <= b; i++)
    {
        int j = i;
        bool current = true;

        while(j != 0)
        {
            int num = j % 10;
            if(num != 4&& num != 7)
            {
                current = false;
                break;
            }
            j/= 10;
        }

        if(current)
        {
            cout << i << " ";
            no_lucky = false;
        }
    }

    if(no_lucky)
    {
        cout << "-1";
    }
}